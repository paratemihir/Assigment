// Accept 2 numbers and find out its sum check it size

#include <stdio.h>
int main()
{
  int a, b, sum;
  printf("enter a : ");
  scanf("%d", &a);
  printf("enter b : ");
  scanf("%d", &b);

  sum = a + b;
  printf("sum is : %d", sum);
  printf("\nThe size of the sum is %zu bytes.", sizeof(sum));
}
