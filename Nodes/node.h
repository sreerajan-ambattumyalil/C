#include <stdio.h>
#include <stdlib.h>
#define SUCCESS 1
#define FAILURE 0

typedef struct node {
	int val;
	struct node* next;
} Node;

Node* FindTail(Node* head);
Node* CreateNode(int value);
Node* CreateList(Node* head,int* a, int length);
void PrintList(Node* head);

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

Node* FindNode(Node* head,int value)
{
	Node* tmp = head;

	while(tmp->val != value && tmp != NULL)
		tmp = tmp->next;

	return tmp;
}

Node* FindNthNode(Node* head,int n)
{
	Node* tmp = head;

	while(n > 0 && tmp != NULL)
	{
		tmp = tmp->next;
		n--;
	}

	return tmp;
}

Node* FindParentOf(Node* head, int value){

	Node* tmp = head;

	while(tmp != NULL && tmp->next != NULL && tmp->next->val != value )
		tmp = tmp->next;

	return tmp;
}
int Swap(Node* head, int n, int m)
{
	Node* nthNode = FindNthNode(head,n-1);

	Node* mthNode = FindNthNode(head,m-1);
	
	if(nthNode == NULL || mthNode == NULL) return FAILURE;
	
	int tmp;
	
	tmp = nthNode->val;
	nthNode->val = mthNode->val;
	mthNode->val = tmp;

	return SUCCESS;
}
