#include<stdio.h>
int main()
{
int  a,b,c,sum=0,i;
  printf("enter the first term, difference and series element");
  scanf("%d %d %d",&a,&b,&c);
  for(i=1;i<=c;i++)
  {
    sum=sum+a;
    a=a+b;
  }
  printf("AP series is:%d",sum);
  return 0;
}
