 #include<stdio.h>
int main()
{
  int A,B,temp;
  printf("enter the values: ");
  scanf("%d %d",&A,&B);
  temp=A;
  A=B;
  B=temp;
  printf("%d %d",A,B);
  
return 0;
}
