#include<stdio.h>

float area(float);

int main(){

    float rad, a;
    printf("Enter the radius of circle");
    scanf("%f", &rad); 

    a = area(rad);
    printf("The area of circle of the given radius is %f", a);
    return 0;
}

float area(float r){
    float b, pi = 3.14159;   
    b = pi*r*r;
    return b;
}