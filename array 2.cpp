#include<stdio.h>
int main()
{
  int a[10],i,j,c;
  for(i=0;i<10;i++)
  {printf("give integer to print");
  scanf("%d",&a[i]);
  }
  for(i=0;i<10-1;i++)
  {
      for(j=0;j<10-i-1;j++)
      {
          if(a[j]>a[j+1])
          {
              c=a[j];
              a[j]=a[j+1];
              a[j+1]=c;
          }
      }
  }
  printf("sorted array is as follows");
  for(i=0;i<10;i++)
  {
      printf("%d",a[i]);
  }
  return 0;
}
