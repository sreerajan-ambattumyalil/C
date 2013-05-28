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



int Count(Node* head)
{
	Node* nodeArray[10];
	int j = 0;
	int count = 0;
	Node* temp  = head;

	while(temp != NULL){
		int i;
		for(i=0;i<j;i++)
		{
			if(nodeArray[i] == temp)
				return count;
		}
			Node* a = temp;
			nodeArray[j] = a;
			printf("putting in %x \n",a);
			j++;
			count++;
		//printf("%x for %x \n",temp, temp->next);
		temp = temp->next;
	}
	return count;
}

int main()
{
	int a[] = {1,2,3,4};
	Node* head;
	
	
	head = CreateList(head, &a[0], 4); 
	
	Node* temp = head;
	while(temp->next != NULL) temp=temp->next;
	
	temp->next = head;	
	printf("%d\n",Count(head));
	//PrintList(head);
	
}

