//70..to demonstrate the functioning of global and local variables
#include<stdio.h>
void display();
int main ()
{
 int a,b;
 printf("Enter the values of a and b:");
 scanf("%d%d",&a,&b);
  display();
 printf("a=%d,b=%d\n",a,b);
  return 0;
}
void display()
{
 int a=2, b=3;
 printf("a=%d,b=%d\n",a,b);
}