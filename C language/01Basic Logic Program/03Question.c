// WAP to Find Area And Circumference of Circle
// Circumference is : total distance around the circle / Formula : 2*pi*r
#include <stdio.h>

int main()
{
  float radius, area;
  printf("enter radius : ");
  scanf("%f", &radius);

  // Calculate Area
  area = 3.14 * radius * radius;
  printf("Area of a circle is : %.2f",area);

  // Calculate Circumference
  float circumference = 2 * 3.14 * radius;
  printf("\nCircumference of circle is : %.2f",circumference);

}