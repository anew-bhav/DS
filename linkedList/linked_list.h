#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

struct Node{
	int data;
	struct Node* next;
};

void insert_at_the_beginning(int x);
void insert_at_the_nth_position(int x,int position);
void insert_at_the_end(int x);
int count_nodes();
void Print();


#endif


