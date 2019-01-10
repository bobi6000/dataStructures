/*
 * singleList.c
 *
 *  Created on: 7 sty 2019
 *      Author: pawe³.staniak
 */


#include "main.h"

sll_t list1;



void sllInit (void){

	list1.key=0U;
	list1.headSll=NULL;
	list1.nextPointer=NULL;

}
node_t *head=NULL;
node_t *current=NULL;

int newList(void){

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
