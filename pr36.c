#include<stdio.h>

int main(){
    int n ; 
    printf("Enter a number:\t");
    scanf("%d", &n);

    if((n & 1) == 1){

        printf("Entered number is odd");
    } 
    else
      {  printf("Entered number is Even");
      }
   return 0;
}