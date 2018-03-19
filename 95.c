#include<stdio.h>
int main()
{
int P,T,R,SI;
printf("enter the principle interest,time and at rate: ");
scanf("%d%d%d",&P,&T,&R);
SI=(P*T*R)/100;
printf("simple interest is %d",SI);
return 0;
}
