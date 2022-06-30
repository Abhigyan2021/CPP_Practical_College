#include<stdio.h>

int main(){
    int num,x =1,store;
    printf("Enter the integer to print its table till 10\n");
    scanf("%d", &num);

    while(x<11){
        store = num * x ;
        printf("%d\n", store);
        x++; 
    }
    return 0;
}