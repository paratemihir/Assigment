/*Write a program you have to make a summation of first and last Digit. (E.g.,
1234 Ans: -5)*/

#include <stdio.h>

int main()
{
  int num, firstDigit, lastDigit, sum;

  printf("Enter a number : ");
  scanf("%d", &num);

  // Get the last digit
  if (num < 0)
  {
    lastDigit = -1 * (num % 10);
  }
  else
  {
    lastDigit = num % 10;
  }

  // using while loop
  firstDigit = num;
  while (firstDigit >= 10 || firstDigit <= -10)
  {
    firstDigit /= 10;
  }

  // Calculate first and last digit and negate the result
  sum = -(firstDigit + lastDigit);

  // Output the result
  printf("Sum of first and last digit (negated): %d\n", sum);

}
