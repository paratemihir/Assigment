/* Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P */

#include <stdio.h>
#include <math.h>

int main()
{
  float Amount, Principal, Rate, time;
  printf("enter principal amount: ");
  scanf("%f", &Principal);

  printf("enter interest rate: ");
  scanf("%f", &Rate);

  printf("enter time(year): ");
  scanf("%f", &time);

  Amount = Principal * pow((1 + Rate / 100), time);
  printf("compound interest annually is : %.2f", Amount);

  float compoundInterest = Amount - Principal;
  printf("\nCompound interest is : %.2f", compoundInterest);

}