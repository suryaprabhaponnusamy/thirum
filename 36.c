#include<stdio.h>
void main()
{
int i,c=0,c1=0,c2=0;
char a[50]="karthi123&*^";
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0'&&a[i]<='9')
{
c++;
}
else if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
{
c1++;
}
else
{
c2++;
}
}
printf("%d\n%d\n%d\n",c,c1,c2);
}
