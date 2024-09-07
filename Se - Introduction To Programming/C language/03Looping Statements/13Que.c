// calculate the Factorial of a Given Number using while loop

#include <stdio.h>

int main()
{
  int n, fact = 1;
  printf("Enter a number : ");
  scanf("%d", &n);

  int i = 1;
  while (i <= n)
  {
    fact = fact * i;  
    i++;
  }
  printf("factorial is : %d", fact);
}
