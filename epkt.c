#include<stdio.h>
#include<string.h>

int main(){
    char string[] = "BRICS";

    printf("Required output : ");

    for(int i=0;i<strlen(string);i++){
        printf("%cA", string[i]);
    }
    return 0;
}