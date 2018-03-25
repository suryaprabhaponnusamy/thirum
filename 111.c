#include <stdio.h>

int main()
{
	int n,count=1;
	printf("enter the integer: ");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		if(n!=0)
		{
			count=count+1;
		}
	}
	printf("%d",count);
	return 0;
}
