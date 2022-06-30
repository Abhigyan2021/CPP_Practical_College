//56..program to change third bit of a given number 
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    n = n^8;
    printf("the number after changing third bit is %d",n);
    return 0;
}