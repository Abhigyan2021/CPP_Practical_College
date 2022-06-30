//61..c program to sort an array using bubble sort  
#include<stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n;
    printf("enter a number to be searched: ");
    scanf("%d", &n);
    int start = 0;
    int end = 9;
    while(start<=end){
        int mid = start + (end - start)/2;
        printf("%d%d%d\n",start,end,mid);
        if(arr[mid]==n) {
            printf("found at index %d",mid) ;
            return 0;
        }
        else if(arr[mid]<n) {
            start = mid + 1;
        }
        else if(arr[mid]>n) {
            end = mid - 1;
        }
    }
    printf("not found");
    return 0;
}