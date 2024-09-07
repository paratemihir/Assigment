/*WAP of Addition, Subtraction, Multiplication and Division using Switch
case.(Must Be Menu Driven)*/

#include <stdio.h>

int main()
{
  int choice;
  while (1)
  {
    // Menus:
    printf("Menu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit the program\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    // if choice is 5 exit the loop
    if (choice == 5)
    {
      printf("Exit the program");
      break;
    }

    int num1, num2, r;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);

    // Switch case:
    switch (choice)
    {
    case 1: // Addition
      r = num1 + num2;
      printf("Result : %d", r);
      break;
    case 2: // Subtract
      r = num1 - num2;
      printf("Result : %d", r);
      break;
    case 3: // Multiplication
      r = num1 * num2;
      printf("Result : %d", r);
      break;
    case 4: // Division
      r = num1 / num2;
      printf("Result : %d", r);
      break;
    default: // default statement
      printf("Invalid choice");
    }
    printf("\n");
  }
}
