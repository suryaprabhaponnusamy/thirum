#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the number: ");
scanf("%d",&a);
printf("enter the first and last digit: ");
scanf("%d%d",&b,&c);
if(a>b)
{
if(a<c)
printf("yes");
}
else
{
printf("no");
}
}
