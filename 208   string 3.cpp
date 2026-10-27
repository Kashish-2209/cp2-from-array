#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    printf("enter a string -");
    gets(a);
    printf("sting in lower case=%s\n",strlwr(a));
    return 0;
}
