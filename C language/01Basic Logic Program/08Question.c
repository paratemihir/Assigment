// Find circumference of Rectangle formula : C = 4 * a

#include <stdio.h>

int main()
{
  float area, length, width, circumference;
  printf("length : ");
  scanf("%f", &length);

  printf("width : ");
  scanf("%f", &width);

  area = length * width;
  printf("Area of rectange : %.2f", area);

  circumference = 4 * area;
  printf("\nCircumference of rectangle : %.2f", circumference);
}