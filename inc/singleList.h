/*
 * singleList.h
 *
 *  Created on: 7 sty 2019
 *      Author: pawe³.staniak
 */

#ifndef INC_SINGLELIST_H_
#define INC_SINGLELIST_H_

typedef struct{
	//Singly-Linked List
	uint16_t *headSll;
	uint16_t key;
	uint16_t *nextPointer;
}sll_t;


typedef struct node {
	uint16_t val;
	struct node *next;
}node_t;



extern node_t *head;
extern node_t *current;

int newList(void);

#endif /* INC_SINGLELIST_H_ */
