#include <stdio.h>

void main()
{
  int num;
  printf("enter a number : ");
  scanf("%d", &num);

  if (num == 0)
  {
   printf("not even or not odd");
  }
  else if (num % 2 == 0)
  {
    printf("even number");
  }
  else
  {
    printf("odd number");
  }
}