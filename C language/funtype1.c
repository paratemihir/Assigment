#include <stdio.h>

int add()
{
  int a,b;
  printf("enter a number 1: ");
  scanf("%d", &a);
  printf("enter a number 2: ");
  scanf("%d", &b);

  printf("Addition : %d", a + b);
}

int sub()
{
  int a,b;
  printf("\nenter a number 1: ");
  scanf("%d", &a);
  printf("\nenter a number 2: ");
  scanf("%d", &b);

  printf("\nSubtraction : %d", a - b);
}

int multiply()
{
  int a,b;
  printf("\nenter a number 1: ");
  scanf("%d", &a);
  printf("\nenter a number 2: ");
  scanf("%d", &b);

  printf("\nSubtraction : %d", a * b);
}


int main()
{
  add();
  sub();
  multiply();
}
