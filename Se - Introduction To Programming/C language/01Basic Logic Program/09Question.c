// Find circumference of Triangle formula : triangle = a + b + c

#include <stdio.h>

int main()
{
  float a, b, c, circumference;
  printf("enter a : ");
  scanf("%f", &a);
  printf("enter b : ");
  scanf("%f", &b);
  printf("enter c : ");
  scanf("%f", &c);

  circumference = a + b + c;
  printf("circumference of triangle : %.2f",circumference);
}