//64..c program to display sum of two numbers using fumction
#include<stdio.h>
void sum_two(int a,int b){
    int sum = a + b;
    printf("sum of %d and %d is %d",a,b,sum);
}
int main()
{
    int a,b;
    printf("enter two numbers: ");
    scanf("%d%d", &a,&b);
    sum_two(a,b);
    return 0;
}