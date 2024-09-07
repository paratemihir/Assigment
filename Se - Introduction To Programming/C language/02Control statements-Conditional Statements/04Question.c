/*WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement*/

#include <stdio.h>

int main()
{
  /* Arithmetic operator
  + --> Addition
  - --> Subtract
  * --> multiplication
  / --> Division
  % --> Modulus */
  int num1, num2;
  char operator;
  printf("enter num1: ");
  scanf("%d", &num1);
  printf("enter num2: ");
  scanf("%d", &num2);

  printf("enter operator(+, -, *, /, %): ");
  scanf(" %c", &operator);

  if (operator == '+')
  {
    printf("Addition : %d",num1 + num2);
  }
  else if (operator == '-')
  {
    printf("Subtraction : %d", num1 - num2);
  }
  else if (operator == '*')
  {
    printf("Multiplication : %d", num1 * num2);
  }
  else if (operator== '/')
  {
    printf("Division : %d", num1 / num2);
  }
  else if (operator== '%')
  {
    printf("Modulus : %d", num1 % num2);
  }
  else
  {
    printf("invalid operator");
  }
}
