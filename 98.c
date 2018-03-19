#include <stdio.h>

int main()
{
	int n,a[10],i;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]!=i)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
