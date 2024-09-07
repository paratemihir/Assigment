// Find circumference of square formula : C = 4 * a

#include <stdio.h>

int main()
{
  float side, area, circumference;
  printf("enter side of square : ");
  scanf("%f", &side);

  area = side * side;

  circumference = 4 * area;
  printf("Circumference of square is : %.2f", circumference);
}