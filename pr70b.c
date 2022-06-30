//b..printing 2D arrays using pointers
// #include<stdio.h>
// int main ()
// {
//   int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//   int *p;
//   p=&arr[0][0];
//   for(int i=0;i<9;i++)
//   {
//       printf("%d\t",*(p+i));

//   }
//   return 0;
// }
#include<stdio.h>

int main(){
  int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,0,1,2},{4,9,10,15}};
  int *ptr = &arr;

  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
       printf("%3d ",*((ptr+i*4)+j));
    }
    printf("\n");
  }
  return 0;
}

