#include<stdio.h>

int main(){
    int age;

    printf("Please the enter age of candidate to check eligibility for voter ID card,\n");
    scanf("%d", &age);

    if(age<=0){
        printf("Invalid value. Please enter a valid value.\n");
        scanf("%d", &age);
        
    }
        if(age >= 18 && age<=80){
            printf("The candidate of age %d is eligible for voter ID card.\n", age);
        }
        else{
            printf("The candidate is not eligible for voter ID card.\n");
        }
    return 0;
}