//Program to find nth prime number

#include <stdio.h>

int isPrime(int num)
{
	if((num%2) == 0 && (num != 2)) return 1;
	
	for(int i = 2;i<num/2;i++)
		if(num%i == 0)
			return 1;
	return 0;
}

int main()
{
	int n = 10001;
	int i = 2;
	int result;
	
	while(n >0)
	{
		if(isPrime(i) == 0) 
		{
			result = i;
			n--;
			//printf("%d th prime is %d \n",n,i);
		}
		i++;
	}
	printf("1001st prime is %d \n",result);
	
}

