// Write a program in C to print individual characters of a string in reverse order

#include <stdio.h>
#include <string.h>

int main()
{
  char str[50];
  printf("Enter a string : ");
  fgets(str, 50, stdin); // read string

  int length = strlen(str); // check string length
  printf("Reverse order : ");

  for (int i = length - 1; i >= 0; i--)
  {
    printf("%c", str[i]);
  }
}