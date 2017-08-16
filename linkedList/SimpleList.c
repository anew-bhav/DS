#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

struct Node* head;

int count_nodes(){
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp = head;
	int count = 0;
	while (temp!=NULL){
		count++;		
		temp = temp->next;
			
	}
	return count;
}

void insert_at_the_beginning(int x){
	insert_at_the_nth_position(x,1);
	
}

void insert_at_the_nth_position(int x,int position){
	int valid_pos;
	if(position>(count_nodes()+1)){
		printf("Invalid Position\nEnter Valid Position(1-%d)\n",count_nodes()+1);
		scanf("%d",&valid_pos);
		insert_at_the_nth_position(x,valid_pos);
		return;
	}
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp1 = head;
	
	if (position == 1){
		temp->next = head;
		head = temp;	
	}

	else{
		while(position!=2){
			temp1=temp1->next;
			--position;
		}

		temp->next=temp1->next;
		temp1->next = temp;
	}

	Print();

}

void insert_at_the_end(int x){
	insert_at_the_nth_position(x,count_nodes()+1);
}

void Print(){
	struct Node* temp = head;
	while(temp != NULL){
		printf(" %d",temp->data);
		temp = temp->next;
	}
	printf("\n");

}

int main(){
	head = NULL;
	int n;
	int x;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
	 	insert_at_the_beginning(x);
	} 
	insert_at_the_beginning(200);
	insert_at_the_end(100);
	insert_at_the_nth_position(1000,10);
	
	free(head);
	return 0;
}
