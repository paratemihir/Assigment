// Calculate compound interest

/*formula : A = P(1 + r/n)n*t
A = final amount
P = Principal balance
r = interest rate
n = number of times interest applied per time period(per year)
t = money is invested for in years
*/

#include <stdio.h>
#include <math.h>
int main()
{
  double principal, rate, amount;
  int year;

  printf("Enter principal amount: ");
  scanf("%lf", &principal);

  printf("Enter interest rate: ");
  scanf("%lf", &rate);

  printf("Enter years: ");
  scanf("%d", &year);

  // A = P(1 + r/n)n*t
  amount = principal * pow((1 + rate/100),year);

  printf("Compount interest after %d years : %.2f",year,amount);
}
