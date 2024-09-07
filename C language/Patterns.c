#include <stdio.h>

void main()
{
  /*
  int row, collum;
  for (row = 1; row <= 6; row++)
  {
    for (collum = 1; collum <= row ; collum++)
    {
      printf("*");
    }
    printf("\n");
  }
  */

  /*
    int i, j, k;
    for (i = 1; i <= 6; i++)
    {
      for (k = 1; k <= 6 - i; k++)
      {
        printf(" ");
      }
      for (j = 1; j <= i; j++)
      {
        // printf("*");
        printf(" *");
      }
      printf("\n");
    }
    */

  
    int i, j, k,u;
    printf("enter a row : ");
    scanf("%d",&u);

    for (i = 1; i <= u; i++)
    {
      for (k = 1; k <= 6 - i; k++)
      {
        printf(" ");
      }
      for (j = 1; j <= i; j++)
      {
        // printf("*");
        printf(" *");
      }
      printf("\n");
    }
    


  // using while-loop
  /*
  int rows = 5;
  int col = 1;

  while (col <= rows)
  {
    int j = 1;
    while (j <= col)
    {
      printf("*");
      j++;
    }
    col++;
    printf("\n");
  }
  */

}
