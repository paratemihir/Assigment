//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *

#include <stdio.h>

int main()
{
  int row, col, star;
  for (row = 1; row <= 5; row++) // print row
  {
    // Print spaces
    for (col = row; col < 5; col++)
    {
      printf("  "); // print space
    }
    // Print stars
    for (star = 1; star <= (2 * row - 1); star++)
    {
      printf("* ");
    }
    printf("\n"); // new line
  }
  return 0;
}
