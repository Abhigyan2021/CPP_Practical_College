#include<stdio.h>

int main(){
    int var1,var2;

    printf("Please enter the values of two variables\n");
    scanf("%d%d", &var1,&var2);

    printf("The value of 1st variable and 2nd variable before swapping is %d and %d respectively.\n", var1, var2);

    var1 = var1 + var2;
    var2 = var1 - var2;
    var1 = var1 - var2;

    printf("The value of 1st variable and 2nd variable after swapping is %d and %d respectively.\n", var1,var2);
    return 0;
}