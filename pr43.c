#include<stdio.h>

int main(){
    int i, a[6];

    printf("Please enter value to initialize a six value element\n");

    for(i=0;i<6;i++){
        scanf("%d", &a[i]);

        if(a[i]%2==0){
            printf("The %d value of the given array is even\n", i);
        }
        else{
            printf("The %d value of the given array is odd\n", i);
        }
    }

    printf("Following array is taken\n");

    for(i=0;i<6;i++){
        printf("%d  ", a[i]);
    }
    return 0;
}