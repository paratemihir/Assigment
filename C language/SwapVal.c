#include <stdio.h>

void main()
{
  int a;
  int b;
  printf("enter a : ");
  scanf("%d", &a);

  printf("enter b : ");
  scanf("%d", &b);

  a = a + b;
  b = a - b;
  a = a - b;
  printf("a : %d \t b : %d", a, b);
}