#include<stdio.h>
int main()
{
int n,i,a[20];
printf("enter the range: ");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
printf("%d%d\n",a[i],i);
}
return 0;
}


