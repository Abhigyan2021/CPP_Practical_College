//54..c program to convert a string entered in lower case to upper case 
#include<stdio.h>
int main()
{
    int i = 0;
    char str[20];
    printf("enter a string in lower case: \n");
    gets(str);
    while(str[i]!= '\0'){
        str[i] = str[i] - 32;
        i++;
    }
    printf("the string in upper case: \n");
    printf(str);
    return 0;
}