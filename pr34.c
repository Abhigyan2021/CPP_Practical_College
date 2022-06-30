#include<stdio.h>

int main(){
    int n,r,sum = 0 , temp;
     printf("Enter a number\n");
     scanf("%d", &n);

    temp = n;
    
    while(n>0){
        r = n%10;
        sum = sum + (r*r*r);
        n = n/10;

    }

    if(temp == sum)
    {
        printf("Given number is armstrong number\n");
    }
    else{
        printf("Given number is not an armstrong number\n");
    }

    return 0;
}