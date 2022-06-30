//73..c program to print the adress and the entered integer in hexadecimal
#include<stdio.h>
int main()
{
    int n;
    int *p;
    printf("enter a number: ");
    scanf("%d",&n);
    p = &n;
    printf("%x\n",p);
    printf("%d",*p);
    return 0;
}