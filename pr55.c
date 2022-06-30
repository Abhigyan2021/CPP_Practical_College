//55...linear search alogorithm in array
#include<stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n;
    printf("enter a number to be searched: ");
    scanf("%d",&n);

    for(int i = 0;i<10;i++){
        if(arr[i]== n){
            printf("the number is found at %d position ",i+1);
            return 0;
        }
    }
    printf("not found");
    return 0;
}