#include<stdio.h>
int main()
{
    int a,b,c,o;
    printf("enter the numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    o=(a*b)%c;
    printf("%d",o);
    return 0;
}
