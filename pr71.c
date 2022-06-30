// // //72..c program using double pointer displaying 2D array
// #include<stdio.h>
// int main ()
// {
//  int a[3][3]={{1,2,3},{4,8,9},{2,67,23}};
//   int **p,*ptr;
//   ptr=&a[0][0];
//   p=&ptr;
//   for(int i=0;i<9;i++)
//   {
//     printf("%d\t",*(*p+i));    //here *p is equal to ptr(which acts as p in above program)
//   }
//   return 0;
// }


// #include<stdio.h>

int main(){
  int arr[4][3]={{5,1,2},{25,14,13},{5,9,4},{54,1,0}};
  for(int i=0;i<4;i++){
    for(int j=0; j<3;j++){
      printf("%3d  ", *(*(arr+i)+j));
    }
    printf("\n");
  }
  return 0;
}