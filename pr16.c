#include<stdio.h>

int main(){
    int n,store ; 
    float avg, sum=0;

    printf("Please enter how many input of variables you want to take average\n");
    scanf("%d", &n);

    printf("please enter %d values to take average of\n", n);

    for(int i = 0; i<n; i++){
        scanf("%d", &store);
        sum = sum + store;
    }

    avg = sum/n;

    printf("The average of values entered by user is %f", avg);

    return 0;
}