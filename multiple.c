#include <stdio.h>

int main()
{
	
	int result = 2520;
	int no = 0;
	while(1)
	{
		
		int i;
		for(i = 2; i< 21;i++)
		{
			no++;
			if(result % i != 0)
				break;
		}
		if(i == 21)
			break;
		result=result+20;
	}

	printf("%d \n %d \n",result,no);
}
