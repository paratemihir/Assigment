// WAP to find the largest of three numbers.

#include <stdio.h>

int main()
{
  int num1, num2, num3;
  printf("enter num1 : ");
  scanf("%d", &num1);
  printf("enter num2 : ");
  scanf("%d", &num2);
  printf("enter num3 : ");
  scanf("%d", &num3);

  if (num1 > num2 && num1 > num3)  // num1 is big -- greater than nun2 & num3
  {
    printf("%d num1 is large number",num1);
  }
  else if (num2 > num3)    // num2 is big -- greater than num3 & num1
  {
    printf("%d num2 is large number",num2);
  }
  else{      // otherwise num3 is big 
    printf("%d num3 is large number",num3);
  }
}

