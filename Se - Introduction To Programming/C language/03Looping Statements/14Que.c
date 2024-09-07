// Accept 5 numbers from user and find those numbers factorials

#include <stdio.h>

int main()
{
  int numbers[5];
  int i, fact, j;

  printf("Enter 5 numbers:\n");
  for (i = 1; i <= 5; i++)
  {
    printf("Enter number : "); // user entered 5 times number
    scanf("%d", &numbers[i]);
  }

  // Calculate and display the factorial
  printf("\nFactorials of the entered numbers:\n");
  for (i = 1; i <= 5; i++)
  {
    fact = 1;
    for (j = 1; j <= numbers[i]; j++)
    {
      fact = fact * j;
    }
    printf("Factorial of %d is %d\n", numbers[i], fact);
  }
}
