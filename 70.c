#include <stdio.h>

int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int p=1;
	while(p<n)
	{
		p<<=1;
	}
	printf("%d",p);
	return 0;
}
