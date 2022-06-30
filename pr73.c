//74..c program to create a structure which which stores and displays the palyer and jersey no
#include<stdio.h>
#include<string.h>
int main()
{
    struct player{
        char*  name;
        int jersey;
    };
    struct player player1,player2;
    player1.name = "virat";
    player1.jersey = 18;
    player2.name = "rohit";
    player2.name = "rohit";
    player2.jersey = 45;
    printf("jersey no. of %s is %d\n",player1.name,player1.jersey);
    printf("jersey no. of %s is %d\n",player2.name,player2.jersey);
    return 0;
}