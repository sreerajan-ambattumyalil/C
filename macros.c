#include <stdio.h>
#define max(a,b) ((a > b) ? a : b)
#define square(a) ((a) * (a))

int main()
{
	int a = 2;
	int b = 3;
	printf("Maximum is %d \n",max(a++,b++));
	printf("Maximum is %d \n",square(a + 1));
}
