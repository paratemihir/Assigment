// Find area of Triangle Formula : A = 1/2 × b × h

// b = base , h = height
#include <stdio.h>

int main()
{
  float base, height,area;
  printf("enter triangle base : ");
  scanf("%f", &base);

  printf("enter triangle height : ");
  scanf("%f", &height);

  area = 0.5 * base * height;
  printf("Area of triangle is : %.2f",area);
}
