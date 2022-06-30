#include<stdio.h>

int main(){
    char store;

    printf("Please enter ASCII value to print its symbol.\n");
    scanf("%d", &store);

    printf("The character relative to the ascii value you have entered is '%c' ", store);
    return 0;
}