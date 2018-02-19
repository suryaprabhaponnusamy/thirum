#include<stdio.h>
#include<string.h>
int main()
{
    char A[10],B[20];
    int i,j;
    printf("enter the string\n");
    scanf("%s",&A);
    printf("enter the second string");
    scanf("%s",&B);
    if(strlen(A)>strlen(B))
    {
        printf("the greater string is %s",A);
    }
    else
    {
        printf("the greater string is %s",B);
    }
    return 0;
    }
