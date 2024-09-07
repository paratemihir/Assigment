// find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include <stdio.h>

int main()
{
  float height, width, length, area;
  printf("enter height(prism) : ");
  scanf("%f", &height);
  printf("enter width(prism) : ");
  scanf("%f", &width);
  printf("enter length(prism) : ");
  scanf("%f", &length);

  area = 2 * (width * length + height * length + height * width);
  printf("area of rectangular prism is : %.2f", area);
}