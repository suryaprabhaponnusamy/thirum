#include<stdio.h>
int main()
{
    int a,b,c;
    int volume;
    printf("enter the values: ");
    scanf("%d %d %d",&a,&b,&c);
    volume=a*b*c;
    printf("volume of cuboid is %d",volume);
    return 0;
}
