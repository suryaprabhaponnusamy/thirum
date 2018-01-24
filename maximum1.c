#include<stdio.h>
int main()
{
int i,a[10],num;
printf("enter the ten numbers: ");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
num=a[0];
for(i=0;i<10;i++)
{
if(a[i]>num)
{
num=a[i];
}
}
printf("maximum of ten numbers is %d",num);
return 0;
}

