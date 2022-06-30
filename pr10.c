#include<stdio.h>

int main(){
   int num,x=1,fact=1;
    printf("Enter the number to count its factorial: \t");
    scanf("%d", &num);

    while(x<=num){
        fact = fact*x;
        x++;
    }

    printf("\n The factorial of the %d is %d", num, fact);
    return 0;
}