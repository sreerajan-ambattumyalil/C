#include <stdio.h>

long find_no_of_possible_paths(int m,int n,int max)
{
	if(m==max || n==max) return 1;
	return find_no_of_possible_paths(m+1,n,max) + find_no_of_possible_paths(m,n+1,max);
}
int main()
{
	printf("%ld",find_no_of_possible_paths(0,0,20));
}

