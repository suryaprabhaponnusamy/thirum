#include<stdio.h>
#include<string.h>
int main()
{
char a[50]="hi darling lusu";
int i,c=0;
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
c++;
}
}
printf("%d",c+1);
return 0;
}
