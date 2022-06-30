//58..c program to print A to Z except D,J,M,T and Y
#include<stdio.h>
int main()
{
    for(char i='A';i <= 'Z';i++){
        if(i != 'D'&&i != 'J' && i != 'M'&& i != 'T'&& i != 'Y'){
            printf("%c\t",i);
        }
    }
    return 0;
}