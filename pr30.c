#include<stdio.h>

int main(){
    int i,j, val;

    printf("Please enter the value for how many lines you want to print pattern\n");
    scanf("%d", &val);

    printf("Printing Pattern now.\n");
    for(i=1; i<(val+1); i++){
        for(j=0;j<i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}