// (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include <stdio.h>

int main()
{
  int n, sum = 0;
  printf("Enter number : ");
  scanf("%d", &n);
  // sum = 0 + 1 * 1 = 1
  // sum = 1 + 2 * 2 = 5
  // sum = 5 + 3 * 3 = 14

  for (int i = 1; i <= n; i++)
  {
    sum = sum + i * i;
  }
  printf("Sum of Squares is : %d",sum);
}