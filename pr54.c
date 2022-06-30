//54...converting alternate letters into capital letters
#include<stdio.h>
int main()
{
    int i = 0;
    char str[20];
    printf("enter a string : \n");
    gets(str);
    while(str[i]!= '\0'){
        if(i%2 == 0) str[i] = str[i] - 32;
        i++;
    }
    printf("enter a new string : \n");
    printf(str);
    return 0;
}