#include <stdio.h>

int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		if(n%7==0)
		{
			printf("yes");
			break;
		}
		else
		{
			printf("no");
		}
	}
	return 0;
}	
