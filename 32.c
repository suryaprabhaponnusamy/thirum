#include<stdio.h>
#include<string.h>
void main()
{
char a[50]="hi darling";
int i,c=0;
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=' ')
{
c++;
}
}
printf("%d",c+1);
}
