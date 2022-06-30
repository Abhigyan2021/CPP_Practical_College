#include<stdio.h>

int main(){
    
    int a[5];

    printf("Please enter the values to initialize an array of 5 elements\n");

    for(int i = 0; i<5; i++){
        scanf("%d", &a[i]);
    }

        printf("Following is the array user initialized\n");

    for(int j = 0; j < 5; j++){
        printf("%d\t", a[j]);
    }
    return 0;
}