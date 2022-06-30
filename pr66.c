//67...c program to find nature of roots and roots of a quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("enter a,b,c in ax^2 +bx + c : ");
    scanf("%d%d%d", &a,&b,&c);
    float det = (b*b) - (4*a*c); 
    printf("det = %f",det);
    if(det > 0){
        printf("the roots are real and distinct\n");
        float root1 = (-b+sqrt(det))/(2*a);
        printf("%f",det);
        float root2 = (-b-sqrt(det))/(2*a);
        printf("root1 = %f,root2 = %f",root1,root2);
    }
    else if(det == 0){
        printf("the roots are real and distinct\n");
        float root1 = -b/(2*a);
        float root2 = -b/(2*a);
        printf("root1 = %f,root2 = %f",root1,root2);
    }
    else if(det < 0){
        printf("the roots are imaginary and distinct\n");
        char i;
        float real1 = -b/(2*a);
        float imag1 = sqrt(-det)/(2*a);
        float real2 = -b/(2*a);
        float imag2 = sqrt(-det)/(2*a);
        printf("root1 = %f + %.2f i,root2 = %f + %.2f i",real1,imag1,real2,imag2);
    }
    return 0;
}