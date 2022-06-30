#include<stdio.h>

int main(){
    int i, count = 0;
    char a[5] ; 

    for(i = 0;i<5;i++){
        scanf("%c", &a[i]);

        if( a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ){
            count = count + 1;
            printf("The %d character in this array is vowel\n", i+1);
        }
        else{
            printf("The %d character in this array is consonant\n", i+1);
        }

    }

    for(i = 0; i<5 ; i++){
        printf("%c\t", a[i]);
    }

    printf("\n%d vowels in array", count);
    
    return 0;
}