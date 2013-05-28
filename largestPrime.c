#include <stdio.h>

int main()
{
	long n = 600851475143;//13195;
//	long n = 13195;
	int i;
	for(i=2;i < n;i++)
	{
		if(n%i == 0)
			n = n/i;
	}
	printf("Largest prime factor is : %d", i);
}
