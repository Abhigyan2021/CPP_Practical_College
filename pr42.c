#include<stdio.h>

int main(){
    int a[5], i, sum = 0;
    float avg;

    printf("Please enter the values to initialize a five element array\n");

    for(i=0;i<5;i++){
        scanf("%d", &a[i]);
    }

    printf("Average of elements of following array would be taken\n");

    for(i=0;i<5;i++){
        sum = sum + a[i];
        printf("%d\t", a[i]);
    }

    avg = sum/5;

    printf("\nThe average of elements of given array is %f", avg);
    return 0;
}