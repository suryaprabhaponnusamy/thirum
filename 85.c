#include<stdio.h>
#include<string.h>
int main()
{
  int i,s;
   char str[20];
   printf("enter the string: ");
   scanf("%s",&str);
   s=strlen(str);
   for(i=0;i<=s;i++)
   {
     if(i%2==0)
     {
       printf("%c",str[i]);
     }
   }
   printf("\n");
   for(i=0;i<s;i++)
   {
     if(i%2!=0)
     {
     printf("%c",str[i]);
   }
   }
}
