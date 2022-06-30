#include<stdio.h>

int main(){
    int check;
    printf("Enter an Integer\n");
    scanf("%d", &check);

    if(check%2 == 0){
        printf("Entered Integer is even");
    }
    else{
    printf("Entered number is odd");
    }
    return 0;
}