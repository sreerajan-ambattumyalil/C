#include<stdio.h>

int main()
{
	int n = 100;
	int sumOfSquares = 0;
	int squareOfSum = 0;
	int sum = 0;
	
	for(int i=1;i<=n;i++)
	{
		sumOfSquares += i*i;
	}
	
	for(int i=1;i<=n;i++)
	{
		sum += i;
	}
	
	squareOfSum = sum*sum;

	printf("Diff is : %d\n", squareOfSum - sumOfSquares);
}
