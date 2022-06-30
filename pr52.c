//53..c program to count length of a string without counting space 
#include<stdio.h>
int main()
{
    int i=0,count_space = 0,count=0;
    char str[20];
    printf("enter a string: \n");
    gets(str);
    while(str[i]!= '\0'){
        if(str[i]==' ') count_space++;
        count++;
        i++;
    }
    count = count - count_space;
    printf("the length of the string is %d",count);
    return 0;
}