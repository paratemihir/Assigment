// WAP to find minimum number among 3 numbers using ternary operator

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

  // num1 < num2 : num1 is less than num2
  // num1 < num3 : num1 is les than num3
  // num1 : num3 : num1 is minimum otherwise num3
  // num2 < num3 : num2 is less than num3
  // num2 : num3 : num2 is minimum otherwise num3
  max = (num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);
  printf("%d is minimum number", max);
}