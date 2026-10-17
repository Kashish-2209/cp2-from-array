#include<stdio.h>
int main()
{
 int i,j,total,a,m[9]={500,200,100,50,20,10,5,2,1};
 printf("enter the amount to find number of notes");
 scanf("%d",&a);
 for(i=0;i<9;i++)
 {
     j=a/m[9];
     if(j>0)
     {
         printf("%d notes of %d",j,m[i]);
         total=total+j;
         a=a%m[i];
     }
 }
 return 0;
}
