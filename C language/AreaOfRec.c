#include <stdio.h>

void main()
{
  int length;
  int width;

  printf("enter a length : ");
  scanf("%d", &length);

  printf("enter a width : ");
  scanf("%d", &width);

  printf("area of rectangle : %d", length * width);
}