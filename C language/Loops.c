#include <stdio.h>

void main()
{
  /*
  int i = 10;

  while (i>=1)
  {
    printf("\n%d",i);
    i--;
  }
*/

  /*
    int i = 1, n;
    printf("enter a number : ");
    scanf("%d", &n);

    while (i <= n)
    {
      printf("%d\n", i);
      i++;
    }
    */

  /*
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    int i= n;
    while (i >= 1)
    {
      printf("%d\n",i);
      i--;
    }

    */

  //  For loops
  /*
  int i;
  for (int i = 1; i <= 10; i++)
  {
    printf("%d\n",i);
  }
  */

  int num;
  printf("enter a number : ");
  scanf("%d", &num);
  for (int i = 1; i <= num; i++)
  {
    printf("\n%d", i);
  }
}