// 1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........n

#include <stdio.h>

int main()
{
  int n;
  float sum = 0.0;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 1)
    { // Odd index, positive term
      sum += (double)i / (i + 1);
    }
    else
    { // Even index, negative term
      sum -= (double)i / (i + 1);
    }
  }

  printf("Sum of the series is: %.2f\n", sum);

  return 0;
}
