// Write a program in C to copy one string to another string.

#include <stdio.h>
#include <string.h>

int main()
{
  char str1[] = "hello world";
  char str2[20];

  // strcpy is inbuild method to copy one string to another
  strcpy(str2, str1);

  printf("Copied string : %s", str1);
}