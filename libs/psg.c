/* PSG multichannel sound effects player v1.0 by Shiru, 03.11.07 */

/* gcc version 12.12.07 */

/* Modified by @MoonWatcherMD at 20151019. Thanks, Shiru! */
/* Modified by @MoonWatcherMD at 20170313. Added pause/resume */


#include <genesis.h>
#include "psg.h"




#define PSG_DATA     0xc00011
#define PSG_VCH_MAX  4



static struct
{
	const u8 *data;

	struct
	{
		struct
		{
			s16 ptr;
			s16 wait;
			s16 time;
			u16 div;
			u8 vol;
		}
		slot[PSG_VCH_MAX];
	}
	chn[4];
}
psg = { };

static int playing = 0;



static void _addch ( u16 chn, u16 off )
{
	s16 i, j, vchn, ntime, tmax, vcnt;

	if(chn<2)
	{
		tmax=PSG_VCH_MAX;

		for(i=2;i>=0;i--)
		{
			vcnt=0;

			for(j=0;j<PSG_VCH_MAX;j++)
			{
				if(psg.chn[i].slot[j].ptr>=0)
				{
					vcnt++;
				}
			}

			if(vcnt==0)
			{
				chn=i;
				break;
			}
			if(vcnt<tmax)
			{
				tmax=vcnt;
				chn=i;
			}
		}
	}

	vchn=-1;

	for(i=0;i<PSG_VCH_MAX;i++)
	{
		if(psg.chn[chn].slot[i].ptr<0)
		{
			vchn=i;
			break;
		}
	}

	if(vchn<0)
	{
		tmax=-1;

		for(i=0;i<PSG_VCH_MAX;i++)
		{
			ntime=psg.chn[chn].slot[i].time;

			if(ntime>tmax)
			{
				tmax=ntime;
				vchn=i;
			}
		}
	}

	psg.chn[chn].slot[vchn].ptr=off;
	psg.chn[chn].slot[vchn].wait=0;
	psg.chn[chn].slot[vchn].time=0;
}



void _frame ( void )
{
	volatile u8 *pb;
	u8 mbyte;
	s16 pchn, vchn, rchn, mvol, nvol;
	u16 div;

	if ( !psg.data )
	{
		return;
	}

	pb=(u8*) PSG_DATA;

	for ( pchn=0; pchn<4; pchn++ )
	{
		for(vchn=0;vchn<PSG_VCH_MAX;vchn++)
		{
			if(psg.chn[pchn].slot[vchn].ptr<0)
			{
				continue;
			}

			psg.chn[pchn].slot[vchn].time++;

			if(psg.chn[pchn].slot[vchn].wait)
			{
				psg.chn[pchn].slot[vchn].wait--;
				continue;
			}

			mbyte=psg.data[psg.chn[pchn].slot[vchn].ptr++];

			switch(mbyte&0xc0)
			{
				case 0x00:/*0=eof 1..31=wait*/
					if(!mbyte) psg.chn[pchn].slot[vchn].ptr=-1; else psg.chn[pchn].slot[vchn].wait=mbyte-1;
					break;
				case 0x40:/*vol only*/
					psg.chn[pchn].slot[vchn].vol=mbyte&0x0f;
					break;
				case 0x80:/*div only*/
					psg.chn[pchn].slot[vchn].div=((u16)mbyte<<8)|psg.data[psg.chn[pchn].slot[vchn].ptr++];
					break;
				case 0xc0:/*vol and div*/
					psg.chn[pchn].slot[vchn].vol=(mbyte>>2)&0x0f;
					psg.chn[pchn].slot[vchn].div=((u16)(mbyte&0x03)<<8)|psg.data[psg.chn[pchn].slot[vchn].ptr++];
					break;
			}
		}

		rchn=-1;
		mvol=16;

		for ( vchn = 0; vchn < PSG_VCH_MAX; vchn++ )
		{
			if ( psg.chn[pchn].slot[vchn].ptr < 0 )
			{
				continue;
			}

			nvol=psg.chn[pchn].slot[vchn].vol;

			if(nvol<mvol)
			{
				mvol=nvol;
				rchn=vchn;
			}
		}

		if(rchn>=0)
		{
			vchn=rchn;
			rchn=pchn<<5;
			*pb=0x80|0x10|rchn|psg.chn[pchn].slot[vchn].vol;
			div=psg.chn[pchn].slot[vchn].div;
			*pb=0x80|rchn|(div&0x0f);
			*pb=div>>4;
		}
	}
}


static void _play ( u8 *data, u8 track )
{
	volatile u8 *pb;

	s16 chn, eoff, doff, chcnt;
	u16 i, j;


	pb = (u8*) PSG_DATA;

	*pb = 0x9f;
	*pb = 0xbf;
	*pb = 0xdf;
	*pb = 0xff;

	psg.data = (u8*) data;

	for(i=0;i<4;i++)
	{
		for(j=0;j<PSG_VCH_MAX;j++)
		{
			psg.chn[i].slot[j].ptr=-1;
			psg.chn[i].slot[j].wait=0;
		}
	}


	eoff  = 2 + ( track << 1 );
	doff  = ( psg.data [ eoff ] << 8 ) + psg.data [ eoff + 1 ];
	chcnt = psg.data [ doff++ ];

	for ( i = 0; i < chcnt; i++ )
	{
		eoff=(psg.data[doff++]<<8);
		eoff+=psg.data[doff++];
		chn=psg.data[eoff++];
		_addch(chn,eoff);
	}
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



void psg_play ( u8 *data, u8 track )
{
	playing = 1;

	_play ( data, track );
}


void psg_callback ()
{
	if ( playing && ( IS_PALSYSTEM || ( vtimer % 6 ) ) )
	{
		_frame ( );
	}
}


void psg_pause ( )
{
	playing = 0;
}


void psg_resume ( )
{
	playing = 1;
}

