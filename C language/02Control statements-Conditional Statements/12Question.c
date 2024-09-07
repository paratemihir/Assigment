// WAP to find maximum number among 3 numbers using ternary operator

#include <stdio.h>

int main()
{
  int num1, num2, num3, max;
  printf("enter num1 : ");
  scanf("%d", &num1);
  printf("enter num2 : ");
  scanf("%d", &num2);
  printf("enter num3 : ");
  scanf("%d", &num3);

  // num1 > num2 : num1 is greater than num2
  // num1 > num3 : num1 is greater than num3
  // num1 : num3 : num1 is maximum otherwise num3
  // num2 > num3 : num2 is greater than num3
  // num2 : num3 : num2 is maximum otherwise num3
  max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
  printf("%d is maximum number", max);
}