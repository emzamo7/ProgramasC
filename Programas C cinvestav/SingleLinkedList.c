#include <stdio.h>
#include <stdlib.h>
#include "SingleLinkedList.h"
void create(SingleLinkedList* l){
	Node* header=malloc(sizeof(Node));
	header->data=0;
	header->next=NULL;
	
	l->header=header;
	l->length=0;
}
void push(SingleLinkedList* l, int data)
{
	
	Node* header = l->header;
	Node* newNode=malloc(sizeof(Node));
	newNode->data=data;
	if (header->next==NULL)
	{
		header->next=newNode;
		newNode->next=NULL;
		l->lenght=l->length+1;
	}
	else{
		Node *lastNode=l->header;
		while (lastNode->next != NULL){
			lastNode = lastNode->next;
		}
		newNode->next=NULL;
		lastNode->next=newNode;
		l->length=l->length+1;
	}
}
