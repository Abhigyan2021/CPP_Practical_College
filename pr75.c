//76..c program to print a alias name that create sand stores player name and player jersey
#include<stdio.h>
int main()
{
    typedef struct player{
        char*  name;
        int jersey;
    }rcb;
    rcb p[10];
    p[1].name = "virat";
    p[1].jersey = 18;
    p[2].name = "devdutt";
    p[2].jersey = 37;
    p[3].name = "maxwell";
    p[3].jersey = 32;
    p[4].name = "devilliers";
    p[4].jersey = 17;
    for(int i = 1; i <=4;i++){
        printf("jersey no. of %s is %d\n",p[i].name,p[i].jersey);
    }
    return 0;
}
