//65..c program to print from given alphabet to Z
#include<stdio.h>
void to_Z(char c){
    for(char i = c;i <= 'Z';i++){
        printf("%c",i);
    }
}
int main()
{
    char c;
     printf("enter a captal letter: ");
     scanf("%c", &c);
    to_Z(c);
    return 0;
}