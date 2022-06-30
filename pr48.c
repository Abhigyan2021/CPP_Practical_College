#include<stdio.h>

int main(){
    int i,j, mat[3][3];

    printf("Please enter the values for a 2D array.\n");
    
    for(i=0;i<3;i++){
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("The values entered by user in the given 2D array before transpose is -\n");
    
    for(i=0;i<3;i++){
        for (j = 0; j < 3; j++)
        {
            printf("%3d  ", mat[i][j]);
        }
        printf("\n");
    }

    printf("The values entered by user in the given 2D array after transpose is -\n");
    
    for(i=0;i<3;i++){
        for (j = 0; j < 3; j++)
        {
            printf("%3d  ", mat[j][i]);
        }
        printf("\n");
    }



    return 0;
}