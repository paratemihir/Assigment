/*
Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo)
*/
#include <stdio.h>
int main()
{
  int a, b;
  printf("enter a : ");
  scanf("%d", &a);        // scanf use to input values
  printf("enter b : ");
  scanf("%d", &b);

  // Addition
  printf("Addition is : %d", a + b);

  // Subtraction
  printf("\nSubtraction is : %d", a - b);

  // Division
  printf("\nDivision is : %d", a / b);

  // Multiplication
  printf("\nMultiply is : %d", a * b);

  // Modulo
  printf("\nModulo is : %d", a % b);
}
