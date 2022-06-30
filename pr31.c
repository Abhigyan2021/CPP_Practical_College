#include<stdio.h>

int main(){
    int i,j, val;

    printf("Please enter the value for how many lines you want to print pattern\n");
    scanf("%d", &val);

    printf("Printing pattern now\n");
    for(i=val; i>0; i--){
        for(j=1;j<i+1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}