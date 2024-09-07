/*Patterns:
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/

#include <stdio.h>

int main()
{
  int row, col;
  for (row = 1; row <= 5; row++) // print row
  {
    for (col = 1; col <= row; col++)  // print column
    {
      if (col % 2 == 1)  // if col is odd print 1
      {
        printf("1 ");
      }
      else   // even print 0
      {
        printf("0 ");
      }
    }
    printf("\n");  // new line
  }
}
