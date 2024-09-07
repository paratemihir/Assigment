// (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
// Formula : sum = sum + (i * (i+1)) / 2 
#include <stdio.h>

int main()
{
  int n, sum = 0;
  printf("Enter a number : ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    // Formula
    sum = sum + (i * (i + 1)) / 2;
  }
  printf("Ans is : %d", sum);
}
/*
Ex: n = 2
First iteration
sum = 0 + (1 * (1+1))/2   
      0 + (1 * 2)/2
      0 + 2 / 2
      0 + 1
      1 

Second iteration
sum = 1 + (2 * (2+1)) / 2
      1 + (2 * 3) / 2
      1 + 6 /2
      1 + 3
      4
*/