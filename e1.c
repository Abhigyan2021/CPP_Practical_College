#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int mask = 1<<3;
    if(n&mask){
        n&= ~mask;
    }
    else{
        n|= mask;
    }

    printf("The number after changing bits is %d", n);
    return 0;
}