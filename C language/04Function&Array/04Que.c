// WAP to find factorial using recursion

#include <stdio.h>
int fact(int n);

int main()
{
  int n;
  printf("Enter a number : ");
  scanf("%d", &n);

  printf("Factorial is : %d",fact(n));
}

int fact(int n)
{
  // Base case
  if (n == 0)
  {
    return 1;
  }
  int fact1 = fact(n - 1);
  int factN = fact1 * n;
  return factN;
  
}
