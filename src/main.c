/*
 * main.c
 *
 *  Created on: 30 Dec 2018
 *      Author: pawel
 */


#include "main.h"

node_t *head=NULL;
node_t *current=NULL;

int main (void){

//week1Arrays();

head = malloc(sizeof(node_t));
head->val = 4;
head->next=NULL;
head = malloc(sizeof(node_t));
head->val = 12;
head->next=NULL;

printf("Singly-Linked List");
while (current != NULL){
	 printf("%d \n",current->val);
	 current=current->next;
}

return 0;
}
