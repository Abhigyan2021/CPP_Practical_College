#include<stdio.h>

int main(){
    char check ; 
    printf("Enter a character: \t");
    scanf("%c", &check);

    if(check == 'A' || check == 'a'){
        printf("Entered character is A or a");
    }

    else {
        printf("Entered character is not A or a");
    }
    return 0;
}