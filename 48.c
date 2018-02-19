#include<stdio.h>
void main()
{
int a[10],i,n,count=0,b;
printf("enter the number: ");
scanf("%d",&n);
printf("list of elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
count=count+a[i];
}
b=count/n;
printf("average %d",b);
}
