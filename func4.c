#include<stdio.h>

int fact(int);

int main(){
    
    int n,f ;
    printf("Enter the number : ");
    scanf("%d",&n);

    f = fact(n);
    printf("The value of factorial of %d is %d", n,f);
    return 0;
}

int fact(int a){
    int s =1, i;
    for(i =1; i<=a; i++){
        s = s*i;
    }
    
    return s;
}