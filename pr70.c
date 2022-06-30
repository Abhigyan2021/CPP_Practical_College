//71..c program to display 1-d and 2 - d arrays using pointers
// #include<stdio.h>
// int main ()
// {
//  int arr[10]={1,2,3,4,5,6,7,8,9,10};
//  int *p;
//  p=&arr[0];            
//  for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)  
//  {
//    printf("%d\t",*(p+i));    
//  }
 
//   return 0;
// }

#include<stdio.h>

int main(){
  
  int arr[] = {1,2,5,9,20};
  for(int i = 0;i<5;i++){
       printf("%d  ", *(arr + i));
  }
  return 0;
}