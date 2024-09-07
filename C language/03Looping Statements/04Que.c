// WAP to print table up to given numbers

#include <stdio.h>

int main()
{
  int table;
  printf("Enter number to print table : ");
  scanf("%d", &table);

  for (int i = 1; i <= 10; i++)
  {
    printf("%d\n", i * table);   // given number * 1 to 10 -- one by one
  }
}