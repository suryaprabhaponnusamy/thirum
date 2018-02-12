#include<stdio.h>
int main()
{
int b,n;
printf("enter the number: ");
scanf("%d",&n);
b=(n&(n-1));
if(b==0)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
