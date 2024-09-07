// Find area of Rectangle Formula : A=wl

#include <stdio.h>

int main()
{
  float length, width, area;
  printf("length : ");
  scanf("%f", &length);

  printf("width : ");
  scanf("%f", &width);

  area = length * width;
  printf("area of rectangle : %.2f",area);
}