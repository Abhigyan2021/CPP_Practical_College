#include<stdio.h>
#include "factorial.h"

int main(){
    int num, output;

    printf("Enter the input number to get factorial : ");
    scanf("%d", &num);

    output = factorial(num);

    printf("\nThe factorial of %d is %d",num,output);

    return 0;
}