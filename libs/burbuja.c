#include "burbuja.h"


void burbuja ( unsigned int *array[] )
{
	unsigned int i, j, aux, elements = sizeof(*array) / sizeof(unsigned int) - 1;

	for ( i = 0; i < elements; i++ )
	{
		for ( j = 0; j < elements - i; j++ )
		{
			if ( *array[j+0] > *array[j+1] )
			{
				aux         = *array[j+0];
				*array[j+0] = *array[j+1];
				*array[j+1] = aux;
			}
		}
	}
}



//
//	 metodo de ordenacion de la burbuja
//        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
//	para i de 1 a n-1 hacer
//		para j de 1 a n-i hacer
//			si v(j)>v(j+1) entonces
//				aux:=v(j);
//				v(j):=v(j+1);
//				v(j+1):=aux;
//			finsi
//		finpara
//	finpara
//
//        Este es para ordenar tablas
//
//	p es un contador de pasadas
//	i direcciona los elementos
//	aux se utiliza para los intercambios
//        n es el ultimo numero del archivo o vector
//
//
//        Este es para ordenar los ficheros
//
//	para p de 1 a n-1 hacer
//		para i de 0 a (n-1)-p hacer
//			si v(i)>v(i+1) entonces
//				aux:=v(i);
//				v(i):=v(i+1);
//				v(i+1):=aux;
//			finsi
//		finpara
//	finpara



//#include <conio.h>
//#include <stdlib.h>
//#include <stdio.h>
//
//main(){
//		int *lp, i=0, j=0, k=0;
//	clrscr();
//	randomize();
//
//	do{
//		int dia = random(31)+1;
//		int mes = random(12)+1;
//		lp[i] = mes+dia;
//		printf ("%d + %d = %d\n", dia, mes, lp[i++]);
//	} while (!kbhit());
//	for (; j<i-1; j++)
//		for (; k<i-j-1; k++)
//			if (lp[k]>lp[k+1]){
//				int aux = lp[k];
//				lp[k]=lp[k+1];
//				lp[k+1]=aux;
//			}
//	for (j=0; j<i; j++)
//		printf("%d ", lp[j]);
//
//
//	getch();getch();
//
//}


