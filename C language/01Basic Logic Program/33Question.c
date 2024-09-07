//  C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include <stdio.h>
int main()
{
  int num, power;
  // Read Integer
  printf("enter a number : ");
  scanf("%d", &num);

  // First Three Powers
  int First_Pow, Sec_Pow, Third_pow;
  First_Pow = num;
  Sec_Pow = num * num;
  Third_pow = num * num * num;

  // result
  printf("First power : %d", First_Pow);
  printf("\nSecond power %d", Sec_Pow);
  printf("\nThird power : %d", Third_pow);
}
