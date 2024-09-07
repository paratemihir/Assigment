// Calculate person’s Annual salary

#include <stdio.h>

int main()
{
  float salary;
  printf("enter your monthly salaray : ");
  scanf("%f", &salary);

  // monthly salary * 12(1 year) = annual salary
  float Annual_salary = 12 * salary;
  printf("Your annual salary is : %.2f", Annual_salary);
}