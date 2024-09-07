// WAP to print factorial of given number

#include <stdio.h>

int main()
{
  int fact = 1, n;
  printf("Enter a number : ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) // start to 1 to user input number - multiplication 1 to n
  {
    fact = fact * i;
  }
  printf("Factorial is : %d", fact);
}
