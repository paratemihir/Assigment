#include <stdio.h>

void main()
{

  // Array basic syntax
  int a[4] = {10, 20, 30, 40},i;
  // printf("%d",a[1]);   //index print
  for (i = 0; i < 4; i++)
  {
    printf("%d\n",a[i]);    // Whole array print
  }


  /*
    int a[4], b[4], i;

    for (i = 0; i < 4; i++)
    {
      printf("enter a num : ");
      scanf("%d", &a[i]);
    }
    for (i = 0; i < 4; i++)
    {
      printf("\n");
      printf("numbers are : %d", a[i]);
    }

    printf("\n***************************\n");

    for (i = 0; i < 4; i++)
    {
      printf("enter a num : ");
      scanf("%d", &b[i]);
    }
    for (i = 0; i < 4; i++)
    {
      printf("\n");
      printf("numbers are : %d", b[i]);
    }
    */
}