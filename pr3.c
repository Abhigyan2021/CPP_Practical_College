#include<stdio.h>

int main(){
    float fahr , cel ; 
    printf("Enter the temperature in fahrenheit: \t");
    scanf("%f",&fahr);

    cel = (5.0/9.0)*(fahr - 32);
    printf("The temperature in celsius is %f \n ", cel);
    return 0;
}