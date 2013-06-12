#include<stdio.h>

long counter = 0;

int isPrime(int num)
{
	for(int i=2;i<=num/2;i++)
	{
		counter++;
		if(num%i == 0)
			return 1;
	}
	return 0;
}

int main()
{
	long result = 0;
	for(int i=2;i<2000000;i++)
	{
		if(isPrime(i) == 0)
		{
			result += i;
		}
	}
	
	printf("Sum is %ld and iterations are %ld\n",result,counter);
}
