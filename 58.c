#include <stdio.h>
#include<string.h>
int main()
{
	int a,b;
	printf("enter the values: ");
	scanf("%d %d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d %d",a,b);
	return 0;
}
