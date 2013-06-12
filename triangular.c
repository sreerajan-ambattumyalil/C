#include <stdio.h>

int find_nth_triangular_no(int n)
{
	if(n == 0) return n;
	return n + find_nth_triangular_no(n-1);
}

int find_no_divisors(int num)
{
	int result = 0;
	for(int i = 1;i<=num/2;i++)
	{
		if(num%i == 0)
			result++;		
	}
	return result+1;
}

int main()
{
	int divisors = 0;
	int nth_triangular_no = 1;
	int n =1;
	while(divisors < 500)
	{
		nth_triangular_no = find_nth_triangular_no(n);
		divisors = find_no_divisors(nth_triangular_no);
		n = n + 1;
		printf("%d %d %d\n", n,divisors,nth_triangular_no);
	}
	
	printf("%d \n",nth_triangular_no);
}
