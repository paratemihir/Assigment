/*WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers*/

#include <stdio.h>

int main()
{
  int number[10];
  int i;
  int evenCount = 0, oddCount = 0;    // count even & odd
  int evenSum = 0, oddSum = 0;        // sum of even and odd numbers
  printf("enter 10 numbers : \n");

  // user input
  for (i = 0; i < 10; i++)
  {
    scanf("%d", &number[i]);
  }

  for (int i = 0; i < 10; i++)
  {
    if (number[i] % 2 == 0) // a. How many Even numbers are there
    {
      evenCount++;
      evenSum += number[i];
    }
    else // b.How many odd numbers are there
    {
      oddCount++;
      oddSum += number[i];
    }
  }

  // Total even & od
  printf("Total even numbers : %d", evenCount);
  printf("\nTotal odd numbers : %d", oddCount);

  // c. Sum of even numbers
  printf("\nSum of even numbers : %d",evenSum);
  printf("\nSum of odd numbers : %d",oddSum);
}