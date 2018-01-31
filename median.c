#include<stdio.h>
int main()
{
int i,j,n,temp,a[5];
printf("enter the array value: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("median element is %d",a[n/2]);
return 0;
}
