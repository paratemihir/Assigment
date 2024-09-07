// Calculate sum of 10 numbers using of while loop

#include <stdio.h>

int main()
{
  int sum = 0, number, count = 0;

  printf("Enter 10 numbers:\n");

  while (count < 10)
  {
    scanf("%d", &number); 
    sum += number;        
    count++;              // Increment the count
  }

  printf("The sum of the 10 numbers is: %d\n", sum);
}
