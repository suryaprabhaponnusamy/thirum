#include <stdio.h>

int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		if(n%10==0)
		{
			printf("%d",n);
			break;
		}
		n++;
	}
	return 0;
}
