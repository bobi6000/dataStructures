/*
 * main.c
 *
 *  Created on: 30 Dec 2018
 *      Author: pawel
 */


#include "main.h"


node_t *list1=NULL;


void pushFront(node_t **head, uint16_t val){

	 	node_t * new_node;
	 	new_node = malloc(sizeof(node_t));

	    new_node->val = val;
	    new_node->next = *head;
	    *head = new_node;

}

void popFront (node_t **head){

	if(head==NULL)printf("List is empty");
	else {

		//*head=head->next;
		free(*head);
	}
}

void printList(node_t *head){
	  node_t * current = head;

	    while (current != NULL) {
	        printf("%d\n", current->val);
	        current = current->next;
	    }
}

int main (void){

//workWithArrays();

//if (newList()==0U)printf("operations are ended correctly");
//else if (newList()==1U)printf("memory allocation failed");
//else printf("unexpected error");


pushFront (&head,1);
pushFront (&head,2);
pushFront (&head,3);

printList(head);

popFront (&head);

printList(head);

return 0U;
}
