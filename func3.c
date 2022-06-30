#include<stdio.h>

int sum(int , int);

int main(){

    int s, a1, a2;
    printf("Enter two values:\n");
    scanf("%d%d", &a1, &a2);

    s = sum(a1, a2);
    printf("The sum of %d and %d is %d", a1, a2, s);
    return 0;
}

int sum(int a , int b){
    int p = a + b;
    return p;
}