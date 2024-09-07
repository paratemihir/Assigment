// A
// A B
// A B C
// A B C D
// A B C D E

#include <stdio.h>

int main()
{
  int row, col;
  char letter = 'A';
  for (row = 1; row <= 5; row++)
  {
    for (col = 1; col <= row; col++)
    {
      printf("%c ",letter);
      letter++;
    }
    printf("\n");
  }
}