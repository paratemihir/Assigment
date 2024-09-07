// WAP to find number is even or odd using ternary operator

#include <stdio.h>

int main()
{
  int n;
  printf("enter number : ");
  scanf("%d",&n);
  
  // Ternary operator
  n % 2 == 0 ? printf("even number") : printf("odd number");
}
