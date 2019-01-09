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
if (head == NULL) {
       return 1;
   }
head->val = 4;
head->next=NULL;


head->next = malloc(sizeof(node_t));
if (head == NULL) {
       return 1;
   }
head->next->val = 12;
head->next->next=NULL;

head->next->next = malloc(sizeof(node_t));
if (head == NULL) {
       return 1;
   }
head->next->next->val = 6;
head->next->next->next=NULL;

current=head;
printf("Singly-Linked List\n");
while (current != NULL){
	 printf("%d \n",current->val);
	 current=current->next;
}

return 0;
}
