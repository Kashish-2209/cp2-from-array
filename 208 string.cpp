#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    printf("enter a string -");
    gets(a);
    printf("length of the string=%s\n",strlwr(a));
    return 0;
}
