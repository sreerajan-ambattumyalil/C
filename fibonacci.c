#include <stdio.h>
#define getEvenFibonacci(a) ((a%2 == 0) ? a : 0)


int findEvenFibonacci(int a, int b)
{
	if((a+b) > 4000000) return 0;
	return ((a+b)%2 == 0 ? (a+b) : 0) + findEvenFibonacci(b,a+b);
}

int main()
{
	int a = 1;
	int b = 2;

	int sum = 2 + findEvenFibonacci(a,b);
	printf("%d \n",sum);
}

