// Accept 5 numbers from user and perform sum of array

#include <stdio.h>

int main()
{
  int arr[5], sum = 0;

  // input 5 numbers
  printf("Enter 5 numbers : \n");
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &arr[i]);  // user input 5 numbers
  }

  // Sum of array
  for (int i = 0; i < 5; i++)
  {
    sum = sum + arr[i];
  }
  printf("sum is : %d", sum); // print sum of 5 numbers
}