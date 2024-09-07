// WAP to calculate swap 2 numbers with using of multiplication and division

#include <stdio.h>

int main()
{
  int a, b;
  printf("enter a : ");
  scanf("%d", &a);
  printf("enter b : ");
  scanf("%d", &b);
  
  /*Ex:
  a = 5 , b = 10
  a = 5 * 10 =   a=50
  b = 50/10  =   b=5
  a = 50/5   =   a=10*/

  a = a * b;
  b = a / b;
  a = a / b;

  printf("a = %d | b = %d",a,b);
}