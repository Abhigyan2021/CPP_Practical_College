//68..c program to find sum of n natural numbers using function 
#include<stdio.h>
void sum_n(int n){
    int sum = 0;
    for(int i = 1;i<=n;i++){
        sum += i;
    }
    printf("sum of first n natural numbers is %d\n",sum);
}
void sum_n_pointer(int *n){
    int sum = 0;
    for(int i =1;i<=*n;i++){
        sum = sum + i;
    }
    printf("sum of first n natural numbers is %d",sum);
}
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    sum_n(n);
    sum_n_pointer(&n);
    return 0;
}