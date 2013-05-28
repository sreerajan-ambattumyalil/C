#include <stdio.h>

int* GetArray(int n, int k, int *a){

	int tmp = 0;
	int b[n-k+1];	

	while(tmp < n-k+1){
	
		int min = a[0];
		for(int i=1;i<k;i++){
			if(min > a[i])
				min = a[i];
			printf("%d min is : %d \n",tmp,min);
		}
		b[tmp] = min;
		a = &a[1];
		tmp++;
	}

	return b;
}

int main()
{
	int a[10] = {1,1,2,3,5,1,6};
	int k = 3;
	int n = 7;
	int *b = GetArray(7,3,&a[0]);
	for(int i=0;i<n-k+1;i++){
		printf("%d \n",b[i]);
	}
		
}
