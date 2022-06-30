#include<stdio.h>

int main(){
    int var1,var2,temp;

    printf("Please enter two values\n");
    scanf("%d%d", &var1, &var2);

    printf("The value of 1st variable and 2nd variable before swapping is %d & %d respectively\n", var1, var2);

    temp = var1;
    var1 = var2;
    var2 = temp;

    printf("The value of 1st variable and 2nd variable after swapping is %d & %d respectively\n", var1, var2);

    return 0;
}