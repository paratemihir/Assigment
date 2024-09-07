/*Write a C program to input basic salary of an employee and calculateits
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%*/
// HRA : House Rent Allowance
// DA  : Dearness Allowance

#include <stdio.h>

int main()
{
  float salary, HRA, DA, total;
  printf("Enter basic salary : ");
  scanf("%f", &salary);

  // Basic Salary <= 10000 : HRA = 20%, DA = 80%
  if (salary <= 10000)
  {
    HRA = 10000 - (10000 * 0.20);
    printf("HRA : %.2f", HRA);
    DA = 10000 - (10000 * 0.80);
    printf("\nDA : %.2f", DA);
  }
  // Basic Salary <= 20000 : HRA = 25%, DA = 90%
  else if (salary > 10000 && salary <= 20000)
  {
    HRA = 20000 - (20000 * 0.25);
    printf("HRA : %.2f", HRA);
    DA = 20000 - (20000 * 0.90);
    printf("\nDA : %.2f", DA);
  }
  // Basic Salary > 20000 : HRA = 30%, DA = 95%
  else if (salary > 20000)
  {
    HRA = 20000 - (20000 * 0.30);
    printf("HRA : %.2f", HRA);
    DA = 20000 - (20000 * 0.95);
    printf("\nDA : %.2f", DA);
  }

  //  Gross salary
  total = salary + HRA + DA;
  printf("\nGross salary : %.2f",total);
}
