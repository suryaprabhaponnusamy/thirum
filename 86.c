#include<stdio.h>
#include<string.h>
int main()
{
  int c=0,i,j,a;
  char str[10];
  printf("enter the string");
  scanf("%s",&str);
  a=strlen(str);
  for(i=0;i<a;i++)
  {
    for(j=i+1;j<=a;j++)
    {
      if(str[i]==str[j])
      {
        c++;
      }
    }
  }
  if(c==0)
  {
    printf("yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}
