//50..c program to display factorial of a number using do while loop
#include<stdio.h>
int main()
{
    int n,i=1,fact = 1;
    printf("enter a number:  ");
    scanf("%d", &n);
    do
    {
        fact = fact*i;
        i++;
    }while(i<=n);
    printf("the factorial of %d is %d",n,fact);
    return 0;
}