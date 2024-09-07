/*. Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, CustomeName, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer. The charge are as follow :*/

#include <stdio.h>

int main()
{
  int CustomerId;
  char CustomeName[50];
  float unit,total;
  printf("enter customer id(electricity) : ");
  scanf("%d", &CustomerId);
  printf("enter your CustomerName same as electricity bill : ");
  scanf("%s", &CustomeName);
  printf("enter consumed unit : ");
  scanf("%f", &unit);

  if (unit > 0 && unit <= 350)
  {
    printf("Charge/unit : 1.20");
    total = 1.20 * unit;
  }
  else if (unit > 350 && unit <= 600)
  {
    printf("Charge/unit : 1.50");
    total = 1.50 * unit;
  }
  else if (unit > 600 && unit <= 800)
  {
    printf("Charge/unit : 1.80");
    total = 1.80 * unit;
  }
  else
  {
    printf("If bill exceeds Rs. 800 then a surcharge of 18pecente will be charged");
    printf("\nCharge/unit : 2.00");
    float cal = 2.00 * unit;
    float per = cal * 0.18;
    total = cal + per;
  }

  printf("\nElectricity Bill\n");
  printf("Customer ID: %d\n", CustomerId);
  printf("Customer CustomeName: %s\n", CustomeName);
  printf("Units Consumed: %.2f\n", unit);
  printf("Total Bill Rs.%.2f ",total);
}
