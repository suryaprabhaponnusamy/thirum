#include<stdio.h>
int  main()
{
  int n,a[10],b[20],i;
  printf("enter no of lines: ");
  scanf("%d",&n);
  printf("number of the kabali team and opponent: ");
  for(i=0;i<n;i++)
  {
  scanf("%d %d",&a[i],&b[i]);
  }
  printf("difference between two team number: ");
  for(i=0;i<n;i++)
  {
    printf("%d\n ",b[i]-a[i]);
  }
  return 0;
  
}
