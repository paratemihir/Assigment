// Check Number Is Positive or Negative

#include <stdio.h>

int main()
{
  int num;
  printf("enter a number : ");
  scanf("%d",&num);
  if (num >= 0)    // greater than 0 is a positive number(1,2...)
  {
    printf("positive number");
  }
  else{              // less than 0 is a negative number(-1,-2..)
    printf("negative number");
  }
   
}