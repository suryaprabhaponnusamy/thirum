#include <stdio.h>

int main()
{
	int n,a,product=1;
	printf("enter the number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		product=product*a;
		n=n/10;
	}
	printf("%d",product);
	return 0;
}
