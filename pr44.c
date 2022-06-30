#include<stdio.h>

int main(){
    int a[8], i,b[8], temp[8];

    printf("Enter the values for an 8 element array\n");

    for(i=0;i<8;i++){
        scanf("%d", &a[i]);
    }

    for(i=0;i<4;i++){

        temp[i] = a[i]; 
        b[7-i] = temp[i];
        b[i] = a[7-i];

    }

    for(i=0;i<8;i++){
        printf("%d  ", b[i]);
    }
    return 0;
}