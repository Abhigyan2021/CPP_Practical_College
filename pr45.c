#include <stdio.h>
int main()
{
  // variables
  float arr[] = {10.5, 15.9, 25.2, 30.4, 55.59};

  // calculate length
  int length = sizeof(arr)/sizeof(arr[0]);
  printf("Array length = %d \n", length);

  // display the array
  printf("Array Elements are, \n");
  for (int i = 0; i < length; ++i)
  {
   printf("%.2f ", arr[i]);
  }
  return 0;
}