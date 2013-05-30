#include <stdio.h>

int main()
{
	int result = 0;
	int i =1;
	int m=1,n=2;
	int a,b,c;
	while(result < 1000)
	{
		a = (n*n) - (m*m);
		b = 2*n*m;
		c = (n*n) + (m*m);
		
		printf("a = %d, b = %d, c = %d \n",a,b,c);
		
		result = a + b + c;	
		m++;
		n++;
	}
		
	printf("a = %d, b = %d, c = %d \n",a,b,c);
}
