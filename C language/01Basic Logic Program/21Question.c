/*Accept 2 numbers from user and swap 2 numbers with using 3rd variable
and without using 3rd variable*/

#include <stdio.h>

int main()
{
  /*using 3rd variable
  int a, b, c;
  printf("enter a: ");
  scanf("%d", &a);
  printf("enter b: ");
  scanf("%d", &b);

  // c empty
  c = a;   // c contain a value -- a empty
  a = b;   // a contain b value -- b empty
  b = c;   // b contain c value -- c empty
  printf("a = %d , b = %d", a, b);
  */



  // without using 3rd variable
  int a,b,c;
  printf("enter a : ");
  scanf("%d",&a);
  printf("enter b : ");
  scanf("%d",&b);

/*
a = 10,b = 20
a = a + b  --> 10 + 20 = 30  -> a = 30
b = a - b  --> 30 - 20 = 10  -> b = 10
a = a - b  --> 30 - 10 = 20  -> a = 20
*/
  a = a + b;  
  b = a - b;  
  a = a - b;  
  printf("a = %d , b = %d",a,b);

  
}