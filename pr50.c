//51..program to print next character corresponding to next character
#include<stdio.h>
int main()
{
    int i = 0;
    char str[20];
    printf("enter a string : \n");
    gets(str);
    while(str[i]!= '\0'){
        str[i] = str[i] + 1;
        i++;
    }
    printf("the new string is : \n");
    printf(str);
    return 0;
}