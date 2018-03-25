#include<stdio.h>
int main()
{
    char a[10];
    int n,t,i,m=0;
    printf("enter the string:");
    scanf("%s",&a);
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;a[i]!='\0';i++)
    {
        m++;
    }
    t=m-n;
    for(i=t;i<=m;i++)
    {
        printf("%c\t",a[i]);
    }
    return 0;
}
