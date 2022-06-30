#include<stdio.h>

int sum_of_even_digits(int);

int main(){

        int input ;
        printf("Enter a number:  ");
        scanf("%d",&input);

        printf("Sum of even digits is: %d", sum_of_even_digits(input));

    return 0;
}

int sum_of_even_digits(int input){
    int rem , sum = 0;

    while(input >0){
        rem =  input%10;
        input = input /10;

        if(rem %2 == 0){
            sum = sum + rem;
        }
    }
    return sum;
}