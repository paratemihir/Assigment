#include <stdio.h>

add(a, b) // parameter
{
  printf("%d", a);
  printf("%d", b);
  printf("\nAddition : %d", a + b);
}
factorial(num)
{
  int fact = 1, i;
  for (i = 1; i <= num; i++)
  {
    fact = fact * i;
  }
}

void main()
{
  int a, b;
  printf("\nEnter A : ");
  scanf("%d", &a);
  printf("\nEnter B : ");
  scanf("%d", &b);

  add(10, 20); // Argument

  factorial();
}
