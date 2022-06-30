//66..calculate the area of circle using function    
#include<stdio.h>
void area(int r){
    printf("area of circle of radius %d is %.2f",r,3.14*r*r);
}
int main()
{
    int r;
    printf("enter the radius of the circle: ");
    scanf("%d", &r);
    area(r);
    return 0;
}