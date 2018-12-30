/*
 * main.c
 *
 *  Created on: 30 Dec 2018
 *      Author: pawel
 */

#include <stdio.h>
#include <stdint.h>

#include "main.h"

int main (void){

//arrayAdr+elemSize*(iElem-firstIndex)
uint16_t tab[10];
uint32_t *ptrTab,*ptrTabLast,*ptrTab2dFirst,*ptrTab2dLast1stRow,*ptrTab2dFirst2ndRow,*ptrTab2dLast;

uint16_t tab2d[2][10];

for(int i=0;i<10;i++)tab[i]=10-i;

for(int j=0;j<2;j++)
	for(int k=0;k<10;k++)tab2d[j][k]=10*j+k;

ptrTab=&tab;
ptrTabLast=&tab[9];

printf("Address to first element %d \n",ptrTab);
printf("Value of first element %d \n",(uint16_t)*ptrTab);
printf("Elements size %d \n",sizeof(uint16_t));
printf("Address to last element %d \n",ptrTabLast);
printf("Value of last element %d \n",(uint16_t)*ptrTabLast);
printf("Time access %d\n",ptrTab+sizeof(int)*(6-0));

/*Multi dimensional array  */
printf("\t Multi-dimensional matrix \n");
for(int j=0;j<2;j++)
	for(int k=0;k<10;k++)printf("Position of item %d -> %d value %d\n",j,k,tab2d[j][k]);



ptrTab2dFirst=&tab2d;
ptrTab2dLast1stRow=&tab2d[0][9];
ptrTab2dFirst2ndRow=&tab2d[1][0];
ptrTab2dLast=&tab2d[1][9];
printf("Address to first element of array %d \n",ptrTab2dFirst);
printf("Address to last element of 1st row %d \n",ptrTab2dLast1stRow);
printf("Address to first element of 2nd row %d \n",ptrTab2dFirst2ndRow);
printf("Address to last element of array %d \n",ptrTab2dLast);


	return 0;
}
