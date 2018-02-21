#include <stdio.h>

int main()
{
	int n,m,t;
	printf("enter the numbers: ");
	scanf("%d%d",&n,&m);
	t=n*m;
	if(t%2==0)
	{
		printf("even");
	}
	else
	printf("odd");
	return 0;
}
