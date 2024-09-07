/*Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)*/

#include <stdio.h>

int main()
{
  int number, maxDigit = 0;

  printf("Enter a number: ");
  scanf("%d", &number);

  // negative numbers to make positive numbers
  if (number < 0)
  {
    number = -number; // Make the number positive : - - = +
  }

  while (number != 0)
  {
    int digit = number % 10; // Get the last digit of the number
    if (digit > maxDigit)
    {
      maxDigit = digit; // Update maxDigit if the current digit is larger
    }
    number /= 10; // Remove the last digit from the number
  }

  printf("Max digit: %d\n", maxDigit);

}
