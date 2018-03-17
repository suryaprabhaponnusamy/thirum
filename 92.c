#include <stdio.h>

int main()
{
	int n,a,sum=0,i;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    printf("enter the followed numbers: ");
		scanf("%d",&a);
		sum=sum+a;
	}
	printf("%d",sum);
	
	return 0;
}
