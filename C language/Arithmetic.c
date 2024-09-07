#include <stdio.h>

void main()
{
  int a, b;
  printf("enter value of a : ");
  scanf("%d", &a);

  printf("enter value of b : ");
  scanf("%d", &b);

  printf("\n Addition : %d", a + b);
  printf("\n Subtract : %d", a - b);
  printf("\n Multiplication : %d", a * b);
  printf("\n Division : %.2f ", (float)a / b);
}