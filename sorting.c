#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,temp,a[10];
printf("enter the size of array: ");
scanf("%d",&n);
printf("enter the elements in array: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j]
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("sorted array: ");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
