/*Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary.*/

#include <stdio.h>

int main()
{
  float salary, deduct_Insurace, deduct_LoanIns, RemainingSalary;

  printf("enter your monthly salary: ");
  scanf("%f", &salary);

  // Insurance
  float Insurance = 100000;
  deduct_Insurace = (Insurance * 10) / 100;
  printf("your insurance premium deduct is: %.2f", deduct_Insurace);

  // Loan
  float loan = 50000;
  deduct_LoanIns = (loan * 10) / 100;
  printf("\nyour loan installment is : %.2f", deduct_LoanIns);

  // Final Salary
  RemainingSalary = salary - deduct_Insurace - deduct_LoanIns;
  printf("\nyour remaining salary is : %.2f", RemainingSalary);
}
