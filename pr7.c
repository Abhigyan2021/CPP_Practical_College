#include<stdio.h>

int main(){
    int num,last;
    printf("Enter the number \n");
    scanf("%d", &num);

    last = num%100;

    printf("The last two digits of the entered number is %d", last);
    return 0;
}