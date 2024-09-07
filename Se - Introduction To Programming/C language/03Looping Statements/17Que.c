/*Calculate 5 numbers from user and calculate number of even and odd using
of while loop*/

#include <stdio.h>

int main()
{
  int number[5];
  int i, evenCount = 0, oddCount = 0;
  printf("Enter 5 numbers:\n");

  i = 0;
  while (i < 5)
  {
    printf("enter number : ");
    scanf("%d", &number[i]);
    i++;
  }

  // find even numbers
  printf("Even number : \n");
  i = 0;
  while (i < 5)
  {
    if (number[i] % 2 == 0)
    {
      evenCount++;
    }
    else{
      oddCount++;
    }
    i++;
  }
  printf("even numbers : %d",evenCount);
  printf("\nodd numbers : %d",oddCount);
}