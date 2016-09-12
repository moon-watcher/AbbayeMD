/* PSG multichannel sound effects player v1.0 by Shiru, 03.11.07 */

/* gcc version 12.12.07 */

/* Modified by @MoonWatcherMD at 20151019. Thanks, Shiru! */


#include <genesis.h>
#include "psg.h"




#define PSG_DATA	 0xc00011
#define PSG_VCH_MAX	 4



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
_psg = { };




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
				if(_psg.chn[i].slot[j].ptr>=0)
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
		if(_psg.chn[chn].slot[i].ptr<0)
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
			ntime=_psg.chn[chn].slot[i].time;

			if(ntime>tmax)
			{
				tmax=ntime;
				vchn=i;
			}
		}
	}

	_psg.chn[chn].slot[vchn].ptr=off;
	_psg.chn[chn].slot[vchn].wait=0;
	_psg.chn[chn].slot[vchn].time=0;
}



void _frame ( void )
{
	volatile u8 *pb;
	u8 mbyte;
	s16 pchn, vchn, rchn, mvol, nvol;
	u16 div;

	if ( !_psg.data )
	{
		return;
	}

	pb=(u8*) PSG_DATA;

	for ( pchn=0; pchn<4; pchn++ )
	{
		for(vchn=0;vchn<PSG_VCH_MAX;vchn++)
		{
			if(_psg.chn[pchn].slot[vchn].ptr<0)
			{
				continue;
			}

			_psg.chn[pchn].slot[vchn].time++;

			if(_psg.chn[pchn].slot[vchn].wait)
			{
				_psg.chn[pchn].slot[vchn].wait--;
				continue;
			}

			mbyte=_psg.data[_psg.chn[pchn].slot[vchn].ptr++];

			switch(mbyte&0xc0)
			{
				case 0x00:/*0=eof 1..31=wait*/
					if(!mbyte) _psg.chn[pchn].slot[vchn].ptr=-1; else _psg.chn[pchn].slot[vchn].wait=mbyte-1;
					break;
				case 0x40:/*vol only*/
					_psg.chn[pchn].slot[vchn].vol=mbyte&0x0f;
					break;
				case 0x80:/*div only*/
					_psg.chn[pchn].slot[vchn].div=((u16)mbyte<<8)|_psg.data[_psg.chn[pchn].slot[vchn].ptr++];
					break;
				case 0xc0:/*vol and div*/
					_psg.chn[pchn].slot[vchn].vol=(mbyte>>2)&0x0f;
					_psg.chn[pchn].slot[vchn].div=((u16)(mbyte&0x03)<<8)|_psg.data[_psg.chn[pchn].slot[vchn].ptr++];
					break;
			}
		}

		rchn=-1;
		mvol=16;

		for ( vchn = 0; vchn < PSG_VCH_MAX; vchn++ )
		{
			if ( _psg.chn[pchn].slot[vchn].ptr < 0 )
			{
				continue;
			}

			nvol=_psg.chn[pchn].slot[vchn].vol;

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
			*pb=0x80|0x10|rchn|_psg.chn[pchn].slot[vchn].vol;
			div=_psg.chn[pchn].slot[vchn].div;
			*pb=0x80|rchn|(div&0x0f);
			*pb=div>>4;
		}
	}
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




void psg_play ( u8 *data, u8 track )
{
	volatile u8 *pb;

	s16 chn, eoff, doff, chcnt;
	u16 i, j;


	pb = (u8*) PSG_DATA;

	*pb = 0x9f;
	*pb = 0xbf;
	*pb = 0xdf;
	*pb = 0xff;

	_psg.data = (u8*) data;

	for(i=0;i<4;i++)
	{
		for(j=0;j<PSG_VCH_MAX;j++)
		{
			_psg.chn[i].slot[j].ptr=-1;
			_psg.chn[i].slot[j].wait=0;
		}
	}


	eoff  = 2 + ( track << 1 );
	doff  = ( _psg.data [ eoff ] << 8 ) + _psg.data [ eoff + 1 ];
	chcnt = _psg.data [ doff++ ];

	for ( i = 0; i < chcnt; i++ )
	{
		eoff=(_psg.data[doff++]<<8);
		eoff+=_psg.data[doff++];
		chn=_psg.data[eoff++];
		_addch(chn,eoff);
	}
}


void psg_callback ()
{
	if ( 	IS_PALSYSTEM || ( vtimer % 6 ) )
	{
		_frame();
	}
}
