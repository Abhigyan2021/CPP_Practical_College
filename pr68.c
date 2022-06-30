//69..c program to swap two number using pointers
#include<stdio.h>
void swap_pointer(int* a,int* b){
    *a =*a + *b;
    *b = *a - *b;
    *a = *a - *b;
    printf("after swapping,a = %d,b = %d\n",*a,*b);
}
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    printf("before swapping a = %d,b = %d\n",a,b);
    swap_pointer(&a,&b);
    return 0;
}