#include<stdio.h>

int main(){
    int n , i , count = 0 ; 
     printf("Enter a number :\n");
     scanf("%d", &n);

     for( i = 0 ; i < 32 ; i++) 
     {
         if(1<<i & n ){
             count++;
         }
     } 

     printf("The number of 1s in this binary is %d" , count);
    return 0;
}