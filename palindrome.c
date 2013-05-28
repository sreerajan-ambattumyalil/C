#include <stdio.h>

int isPalindrome(int n){
	
	int a[6];
	int i = 0;
	
	while(n!=0 && i<3)
	{	
		if(i<3)
		{
			a[i] = n%10;
			n = n/10;
			i++;	
		}
	}
	
	int j = 2;

	printf("%d :  \n",j);
	while(n!=0 && j>=0)
	{
		if(a[j] == n%10)
		{
			j--;
			n = n/10;
		}
		else
			break;	
	}
	
	printf("%d :  \n",j);

	return (j == -1) ? 1 : 0;
	
	
}

int main(){
	
	int n = 100000;
	int max = 999999;
	int i;
	for(i = max-1;i > n;i--)
		if(isPalindrome(i) == 1)
			break;
	
	printf("%d \n",i);
	
	
}

