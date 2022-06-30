#include<stdio.h>

int main(){
    int i,j, val;
    char ptrn = 'A';
    printf("Enter the value of rows\t");
    scanf("%d", &val);
    printf("Printing the pattern now.\n");

    for(i=0 ; i < val ; i++){
        for ( j = 0; j <= i; j++)
        {
            printf("%c", ptrn);      // printf("%c", 'A' + i);
        }
            ptrn++;                  // remove this line if comment section is taken.
       
       printf("\n"); 
    }

    return 0;
}