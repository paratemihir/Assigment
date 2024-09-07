/*WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array*/

#include <stdio.h>
// function defination
void sum(int[3][3], int[3][3]);  // Addition
void sub(int[3][3], int[3][3]);  //Subtraction
void multi(int[3][3], int[3][3]); // Multiplicatoini

int main()
{
  int a[3][3], b[3][3],d[3][3] ,i, j;
  // First matrix
  printf("Enter first matrix :\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  // Second matrix
  printf("Enter second matrix :\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &b[i][j]);
    }
  }
  // Third matrix
  printf("Enter third matrix : \n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &d[i][j]);
    }
  }

  // Function call
  sum(a, b);
  sub(a, b);
  multi(b,d);
}

void sum(int a[3][3], int b[3][3])  // Addition
{
  printf("Addition \n");
  int c[3][3], i, j;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      c[i][j] = a[i][j] + b[i][j];
      printf("%d ", c[i][j]);
    }
    printf("\n");
  }
}
void sub(int a[3][3], int b[3][3])  // Subtraction
{
  printf("Subtraction\n");
  int c[3][3], i, j;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      c[i][j] = a[i][j] - b[i][j];
      printf("%d ", c[i][j]);
    }
    printf("\n");
  }
}
void multi(int a[3][3], int b[3][3])  // Multiplication
{
  printf("Mutiplicatoin\n");
  int c[3][3], i, j;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      c[i][j] = a[i][j] * b[i][j];
      printf("%d ", c[i][j]);
    }
    printf("\n");
  }
}