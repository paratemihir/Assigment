// Perform 2D matrix array

#include <stdio.h>

int main()
{
  int arr[2][2];
  printf("Enter 4 numbers : \n");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  printf("2D Matrix element : \n");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
}