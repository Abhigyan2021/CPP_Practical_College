#include<stdio.h>

int main(){
    int end ,x =1, sum = 0;
    printf("Enter the number till the series to be added\n");
    scanf("%d", &end);

    while(x<=end){
        sum = sum + x*x;
        x++;
    }

    printf("\nThe sum of series from 1 to %d is %d\n", end, sum);
    return 0;
}