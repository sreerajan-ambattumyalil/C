#include "node.h"


int main()
{
	int a[] = {1,2,3,4,7,8,5,6,11};
	Node* head;
	
	head = CreateList(head, &a[0], 9); 
	printf("Base list : \n");
	PrintList(head);
	if(Swap(head,1,9) == SUCCESS)
	{
		printf("New list : \n");
		PrintList(head);
	}
	else
		printf("Screwed input \n");
	
}

