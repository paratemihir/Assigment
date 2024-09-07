// Write a C program to calculate profit and loss on a transaction.

#include <stdio.h>

int main()
{
  float costPrice, sellingPrice, profit, loss;
  printf("enter cost price : ");
  scanf("%f", &costPrice);
  printf("enter selling price : ");
  scanf("%f", &sellingPrice);

  // Calculate profit
  profit = sellingPrice - costPrice;
  // Calculate loss
  loss = costPrice - sellingPrice;

  if (sellingPrice > costPrice) // sellingPrice costPrice se jyada hogi tabhi profit hoga.
  {
    printf("Profit is : %.2f", profit);
  }
  else if (costPrice > sellingPrice)  // costPrice sellingPrice se jyada hogi tabhi loss hoga.
  {
    printf("Loss is %.2f", loss);
  }
  else{
    printf("No profit,No loss");
  }
}
