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
uint32_t *ptrTab,*ptrTabLast;


for(int i=0;i<10;i++)tab[i]=10-i;

ptrTab=&tab;
ptrTabLast=&tab[9];

printf("Address to first element %d \n",ptrTab);
printf("Value of first element %d \n",(uint16_t)*ptrTab);
printf("Elements size %d \n",sizeof(uint16_t));
printf("Address to last element %d \n",ptrTabLast);
printf("Value of last element %d \n",(uint16_t)*ptrTabLast);
printf("Time access %d\n",ptrTab+sizeof(int)*(6-0));
	return 0;
}
