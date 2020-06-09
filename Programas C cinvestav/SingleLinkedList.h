//Definition of the Abstract Data Type (ADT) SingleLinkedList

#define SINGLELINKEDLIST_H
typedef struct node
{
	int data;
	struct node* next;	
}Node;

typedef struct singleLinkedList
{
	Node* header;
	int length;
}SingleLinkedList;

void create(SingleLinkedList * l);

void push(SingleLinkedList * l, int data);

void add_in(SingleLinkedList * l, int data, int index);

void remove_in(SingleLinkedList* l, int index);

void pop(SingleLinkedList* l);

void print(SingleLinkedList* l);

#endif
