// A
// B C
// D E F
// G H I J
// K L M N O

#include <stdio.h>

int main()
{
  int row, col;
  char letter = 'A';

  for (row = 1; row <= 5; row++)
  {
    for (col = 1; col <= row; col++)
    {
      printf("%c ",letter++);   // increment letters
    }
    printf("\n");  // new line
  } 
}
