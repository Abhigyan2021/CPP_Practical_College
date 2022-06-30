#include<stdio.h>

int main(){
    int i,j, a[6][6];

    printf("Please enter the values to initialize a 2D array of 6 by 6 size\n");

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Following 2D array of 6 by 6 is initialized\n");

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }


    return 0;
}