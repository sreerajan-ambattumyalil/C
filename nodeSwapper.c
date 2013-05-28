#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int val;
	struct node* next;
} Node;

Node* FindTail(Node* head){
	Node* tail = head;
	while(tail->next != NULL)
		tail = tail->next;
	return tail;
}

Node* CreateNode(int value){
	Node* node = (Node* )malloc(sizeof(struct node));
	node->val = value;
	node->next = NULL;

	return node;
}

Node* CreateList(Node* head,int* a, int length){
	
	Node* tail;
	
	for(int i=0;i<length;i++)
	{
		if(head == NULL){
			head = CreateNode(a[i]);
		}
		else{
			tail = FindTail(head);
			tail->next = CreateNode(a[i]);
		}
	}
	
	return head;
}

void PrintList(Node* head)
{
	
	Node* tmp = head;
		
	while(tmp!= NULL){
		printf("%d \n", tmp->val);
		tmp = tmp->next;
	}
}

int main()
{
	int a[] = {1,2,3,4};
	Node* head;
	
	head = CreateList(head, &a[0], 4); 
	PrintList(head);
	
}

