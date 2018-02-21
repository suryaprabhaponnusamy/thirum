#include<stdio.h>
#include<string.h>
int main()
{
	int n,sum=0,a;
	printf("enter the number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		sum=sum+a;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}
