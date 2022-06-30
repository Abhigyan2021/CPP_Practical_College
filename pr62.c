//63..c program to print factorial using function
#include<stdio.h>
void factorial(int n){
    int fact = 1;
    for (int i = 1;i <=n;i++){
        fact = fact*i;
    }
    printf("factorial of %d is %d",n, fact);
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    factorial(n);
    return 0;
}