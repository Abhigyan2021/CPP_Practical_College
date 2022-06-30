#include<stdio.h>

int main(){
    int i,j, matA[3][3], matB[3][3], matSum[3][3];

    printf("Please enter values to initialize first 3 by 3 array A\n");
    
    for(i=0;i<3;i++){
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matA[i][j]);
        }
    }

    printf("Please enter values to initialize second 3 by 3 array B\n");
    
    for(i=0;i<3;i++){
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matB[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for (j = 0; j < 3; j++)
        {
            matSum[i][j] = matA[i][j] + matB[i][j];

        }
    }

    printf("following values come after adding the 2 arrays provided by the user.\n");
    
    for(i=0;i<3;i++){
        for (j = 0; j < 3; j++)
        {
            printf("%3d  ", matSum[i][j]);
        }
        printf("\n");
    }
    return 0;
}