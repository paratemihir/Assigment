// C Program to Reverse a Number Using FOR Loop

#include <stdio.h>

int main()
{
  int n, x, r, sum = 0;
  printf("Enter a number : ");
  scanf("%d", &n);
  x = n;
  for (int i = 0; n != 0; i++)
  {
    r = n % 10;
    sum = r + (sum * 10);
    n = n / 10;
  }
  printf("Reversed number : %d", sum);
}