// Write a program in C to find the maximum number of characters in a string

#include <stdio.h>
#include <string.h>

int main()
{
  char str[100];
  printf("Enter a string : ");
  fgets(str, 100, stdin);

  // strlen is inbuild method to count string character
  int length = strlen(str);

  printf("number of characters in a string : %d", length - 1);
}