/*WAP to accept 5 numbers from user and check entered number is even or odd
using of array*/

#include <stdio.h>

int main()
{
  int numbers[5];
  // user input 5 numbers
  printf("Enter 5 numbers : \n");
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &numbers[i]);
  }

  // check even or odd and print
  for (int i = 0; i < 5; i++)
  {
    if (numbers[i] % 2 == 0)
    {
      printf("Number %d is even.\n", numbers[i]);  // check even numbers
    }
    else{
      printf("Number %d is odd.\n",numbers[i]); //  odd numbers
    }
  }
}