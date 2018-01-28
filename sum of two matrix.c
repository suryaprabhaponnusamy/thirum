#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,a[2][2],b[2][2],sum[2][2];
    printf("enter the values: ");
    printf("enter the first matrix elements: ");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        {
           scanf("%d",&a[i][j]);
        }
    printf("enter the second matrix elements: ");
        for(i=0;i<2;i++)
            for(j=0;j<2;j++)
            {
                scanf("%d",&b[i][j]);
            }
    printf("sum of matrix elements entered: ");
        for(i=0;i<2;i++)
            for(j=0;j<2;j++)
            {
                sum[i][j]=a[i][j]+b[i][j];
                printf("%d\t",sum[i][j]);   
            }
    return 0;
}
