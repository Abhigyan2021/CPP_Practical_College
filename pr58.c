//59..write a c program to print a!*a^b
#include<stdio.h>
int main()
{
    int a,b,pow = 1,fact = 1;
    printf("Enter a number: ");
    scanf("%d%d", &a,&b);
    for(int i =1;i<=a;i++){
        fact = fact*i;
    }
    for(int i =1;i<=b;i++){
        pow = pow*a;
    }
    int ans = fact*pow;
    printf("the value of a!*a^b = %d",ans);
    return 0;
}