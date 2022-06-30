//75..c program to create an array of structures which creates and stores the names and jersey numbers if other palyers
#include<stdio.h>
int main()
{
    struct player{
        char*  name;
        int jersey;
    };
    struct player p[10];
    p[1].name = "virat";
    p[1].jersey = 18;
    p[2].name = "rohit";
    p[2].jersey =45;
    p[3].name = "rahul";
    p[3].jersey = 1;
    p[4].name = "rishab";
    p[4].jersey = 17;
    for(int i = 1; i <=4;i++){
        printf("jersey no. of %s is %d\n",p[i].name,p[i].jersey);
    }
    return 0;
}