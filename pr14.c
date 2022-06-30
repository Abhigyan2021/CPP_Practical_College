#include<stdio.h>

int main(){
    int base, power;
    float  store =1;

    printf("Enter the value of base and power\n");

    scanf("%d%d", &base,&power);

    if(power>0){ 
        for(int i =0 ; i<power; i++){
            store = store*base;
        }
    }
    else if(power<0){
                for(int i =0 ; i>power; i--){
            store = (store*base);
        }
        store = 1/store;
    }
    else{
        store = 1;
    }

    printf("\nThe value of %d^%d is %f", base, power, store);
    return 0;
}