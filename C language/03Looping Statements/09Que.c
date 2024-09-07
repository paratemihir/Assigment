// Write a program make a summation of given number (E.g., 1523 Ans: -11)
// 1+5+2+3 = 11

#include <stdio.h>

int main()
{
  int number, sum = 0, digit;

  printf("Enter a number: ");
  scanf("%d", &number);

  while (number > 0)
  {
    digit = number % 10; // Get the last digit
    sum += digit;        // Add to the sum
    number /= 10;        // Remove last digit
  }

  printf("Sum of the digits is: %d\n", sum);

  return 0;
}
