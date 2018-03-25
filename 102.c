#include<stdio.h>
int main()
{
  int n,i,a,b;
  printf("enter the number: ");
  scanf("%d",&n);
  for(i=2;i<=n;i++)  
  {
    a=n/i;
    b=n%i;
   if(b==0)
   {
     printf("%d\t",a);
     break;
   }
   else if(b!=0)
  {
    printf("%d\t",n);
    break;
  }
  }
  return 0;
}
