// Write a program in C to separate individual characters from a string

#include <stdio.h>

void printchar(char arr[]);

int main()
{
  char name[] = "Hello";
  printchar(name);   
}

void printchar(char arr[])
{
  for (int i = 0; arr[i] != '\0'; i++)  // '\0' null character - to end of string
  {
    printf("%c\n", arr[i]);  // print one by one character using %c 
  }
}