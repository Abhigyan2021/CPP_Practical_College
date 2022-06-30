#include<stdio.h>

int main(){
    float area , r, pi = 3.14159 ;
    printf("Enter the radius of circle:\t");
    scanf("%f", &r);

    area = pi*r*r;
    
    printf("The area of circle is %f", area);
    return 0;
}