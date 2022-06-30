/*60..write a c program to the pattern
     A
     A1
     A1C
     A1C3   */
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    for(int i = 1;i<=n;i++){
        for(int j = 0;j<i;j++){
            if(j%2 == 0){
                printf("%c",'A'+j);
            }
            else{
                printf("%d",j);
            }
        }
        printf("\n");
    }
    return 0;
}