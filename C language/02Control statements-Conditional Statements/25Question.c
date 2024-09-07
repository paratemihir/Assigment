/*Write a C program to input electricity unit charges and calculate total
electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/

#include <stdio.h>

int main()
{
  int unit; 
  float bill;
  printf("enter total unit consumed : ");
  scanf("%d", &unit);

  // 50 units Rs. 0.50/unit
  if (unit <= 50)
  {
    bill = 0.50 * unit;
  }
  // next 100 units (51-150) , 0.75/unit
  else if (unit <= 150)
  {
    bill = 50 * 0.50 + (unit - 50) * 0.75;
  }
  // next 100 units (151-250) , 1.20/unit
  else if (unit <= 250)
  {
    bill = 50 * 0.50 + 100 * 0.75 + (unit - 150) * 1.20;
  }
  // above 250 units , 1.50/unit
  else
  {
    bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unit - 250) * 1.50;
  }

  // additional surcharge of 20%
  bill = bill + (bill * 0.20);
  
  // Total bill
  printf("Total electricity bill Rs.: %.2f",bill);
}
