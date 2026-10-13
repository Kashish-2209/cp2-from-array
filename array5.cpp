#include<stdio.h>
int main()
{
    int i,j,a[2][2],b[2][2],c[2][2];
    printf("enter the elements of array 1");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of array 2 ");
    for(i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("result array=\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]*b[i][j];
            printf("%d",c[i][j]);
        }
    }
    return 0;
}
