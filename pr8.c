#include<stdio.h>

int main(){
    int start, end , num;
    printf("Enter the starting number of the series\n");
    scanf("%d", &start);
    printf("Enter the end number of the series\n");
    scanf("%d", &end); 

    printf("Printing the series\n");
    for(num = start; num < end + 1; num++){
        printf("%d\n",num);
    }
    // while(start<=end){
    //     printf("%d\n", start);
    //     start++;
    // }
    return 0;
}