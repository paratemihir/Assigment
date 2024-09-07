// *
// * *
// * * *
// * * * *
// * * * * *
// * * * * * *
// * * * * *
// * * * *
// * * *
// * *
// *

#include <stdio.h>

int main()
{
  int i, j;
  int rows = 6; // middle row star = 6 

  // upper part of the pattern
  for (i = 1; i <= rows; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("* ");
    }
    printf("\n");
  }

  // lower part of the pattern
  for (i = rows - 1; i >= 1; i--)
  {
    for (j = 1; j <= i; j++)
    {
      printf("* ");
    }
    printf("\n");
  }
}
