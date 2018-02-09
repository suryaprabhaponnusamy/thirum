#include<stdio.h>
void main()
{
int i,c=0;
char a[50]="surya.12345";
for(i=0;a[i]!='\0';i++)
{
if(a[i]!='0'&&a[i]!='9')
{
c++;
}
}
printf("%d",c);
}
