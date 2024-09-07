// WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

#include <stdio.h>

int main()
{
  int number, reverse = 0;
  printf("Enter a number : ");
  scanf("%d", &number);

  while (number != 0)
  {
    int digit = number % 10; // Get the last digit of the number

    reverse = reverse * 10 + digit; // Append the digit to the reversed number

    number = number / 10; // Remove the last digit from the original number
  }

  printf("Reverse number : %d", reverse);
}

/*
number = 1234 , reverse = 0
digit   = 1234 % 10   = 4
reverse = 0 * 10 + 4  = 4
number  = 1234 / 10   = 123
isi tarah loop gumta rahega jab tak 0 nahi ho jata.and one by one value reverse karega.
*/
