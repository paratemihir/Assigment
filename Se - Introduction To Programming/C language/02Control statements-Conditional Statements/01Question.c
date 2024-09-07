/*Write a C program to accept two integers and check whether they are equal
or not*/

#include <stdio.h>

int main()
{
  int a, b;
  printf("enter interger a : ");
  scanf("%d", &a);
  printf("enter interger b : ");
  scanf("%d", &b);

  // == : isequal to operator to check equality
  // if condition - based on true condition --if is true to execute if
  if (a == b)
  {
    printf("interger a and b they are equal");
  }
  else   // else condition - based on false condition -- if condition is false than else condition execute
  {
    printf("they are not equal");
  }
}
