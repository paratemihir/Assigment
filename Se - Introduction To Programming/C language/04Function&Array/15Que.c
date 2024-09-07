// Store 5 numbers in array and sort it in ascending order

#include <stdio.h>

void ascending(int arr[], int n);

int main()
{
  int arr[5];
  // user input 5 types
  printf("Enter 5 elements:\n");
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &arr[i]);
  }

  ascending(arr, 5); // function call
}

void ascending(int arr[], int n)
{
  int temp;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] > arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  // print acending order
  printf("Ascending order: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
