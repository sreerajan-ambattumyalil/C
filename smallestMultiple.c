#include<stdio.h>

int main()
{
	int result = 6;
	int a[20];
	int no = 0;
	a[0] = 2;
	a[1] = 3;
	for(int i=4;i<=20;i++)
	{
		int j;
		int multiplyWith = i;
		for(j=0;j< (i-2); j++)
		{
			no++;	
			multiplyWith = ((multiplyWith%a[j] == 0) ? multiplyWith/a[j] : multiplyWith); 
		}
		a[j] = multiplyWith;
		result  *= multiplyWith;

		//for(int k=0;k<=j;k++)
		//{
		//	printf("%d ",a[k]);
		//}
		//printf("\n");
	}

	printf("%d  \n %d\n",result,no);
}
