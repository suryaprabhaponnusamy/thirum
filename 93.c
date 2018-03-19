#include<stdio.h>
int main()
{
    int temp,kel;
    printf("enter the temperature in celsius: ");
    scanf("%d",&temp);
    kel=temp+273;
    printf("temperature in kelvin is %d",kel);
    return 0;
}
