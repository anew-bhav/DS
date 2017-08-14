#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

struct Node* head;
void Insert(int x);
void Print();

void Insert(int x){
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = head;
	head = temp;
}

void Print(){
	struct Node* temp = head;
	while(temp != NULL){
		printf("  %d",temp->data);
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
	 	Insert(x);
		Print();
	}
	return 0;
}
