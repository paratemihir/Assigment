// Convert years into days and months

#include <stdio.h>

int main()
{

  int years, days, month;
  printf("enter years : ");
  scanf("%d", &years);

  // years into days , 1 year = 365days
  days = years * 365;
  printf("Days : %d", days);

  // years into month , 1 year = 12months
  month = years *12;
  printf("\nMonths : %d",month);
}