#include <stdio.h>

int main()
{
	int a,b,c,i,p,flag=0;
	printf("enter the values: ");
	scanf("%d %d",&a,&b);
	c=a*b;
	for(i=1;i<=c/2;i++)
	{
		p=i*i;
		if(p==c)
		{
			printf("perfect square");
			flag=1;
			break;
		}
		
		
	}
	if(flag==0)
	printf("no");
	return 0;
}
