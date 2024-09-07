// 1 2 3 6 9 18 27 54...

#include <stdio.h>

int main()
{
  int n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  double current = 1; // Start with 1
  printf("%.0f ", current);

  for (int i = 1; i < n; i++)
  {
    if (i % 2 == 1)
    {
      current *= 2; // Multiply by 2 on odd indices (1-based)
    }
    else
    {
      current *= 1.5; // Multiply by 1.5 on even indices (1-based)
    }
    printf("%.0f ", current);
  }

  return 0;
}
