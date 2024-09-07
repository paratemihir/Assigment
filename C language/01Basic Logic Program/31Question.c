// Convert kilometers into meters

#include <stdio.h>

int main()
{
  // 1 kilometer = 1000meter
  float kilometer, meters;
  printf("enter kilometers : ");
  scanf("%f", &kilometer);

  // Convert kilometer into meter
  meters = kilometer * 1000;
  printf("meters : %.2f",meters);
}