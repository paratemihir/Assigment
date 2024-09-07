#include <stdio.h>

int main()
{
  int a,b,c;
  a = 588;
  b = 963;

  a = a + b;  // a=30
  b = a - b;  // b=20
  a = a - b;  // a=10

  printf("a = %d , b = %d",a,b);
}