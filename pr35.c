#include<stdio.h>

int main(){
    int num,count = 0;

    printf("Enter the number to count number of its digits:\t");
    scanf("%d", &num);

    while(num != 0){
        
        num = num/10;
        count++;

    }

    printf("The number of digits in the number is %d", count);
    
    return 0;
}