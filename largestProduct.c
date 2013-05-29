#include<stdio.h>
#include<stdlib.h>

int largestProduct(int *a, int index)
{
	int startPointer = 0;
	int prevProduct = 1;
	while((startPointer + 5) < index)
	{
		int curProduct = 1;
		for(int i = startPointer;i<startPointer + 5; i++)
		{
			curProduct *=a[i];	
		}
		
		if(curProduct > prevProduct)
			prevProduct = curProduct;
		startPointer++;
	}

	return prevProduct;
}
int main()
{
	FILE *fp;
	fp = fopen("/Users/sreeraja/Desktop/number.txt","r");
	int c;	
	int *array = (int *)malloc(1000 * sizeof(int));
	int index = 0;
	
	while((c = fgetc(fp)) != EOF)
	{
		array[index++] = c - 48;
	}

	for(int i=0;i<index;i++)
		printf("%d\n",array[i]);
	
	printf(" Largest product = %d\n",largestProduct(array,index));
}
