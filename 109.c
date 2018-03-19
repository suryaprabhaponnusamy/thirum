#include<stdio.h>
 
int main() 
{
   int a[30], i,minimum;
   printf("enter the number: ");
   for (i = 0; i < 10; i++)
   {
     scanf("%d", &a[i]);
   }
   minimum= a[0];
   for (i = 0; i < 10; i++) 
   {
      if (a[i] < minimum)
      {
         minimum = a[i];
      }
   }
   printf(" %d", minimum);
   return 0;
}
