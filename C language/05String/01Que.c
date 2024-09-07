/*Write a program in C to find the length of a string without using library functions.*/

#include <stdio.h>

int countLength(char arr[]);

int main()
{
  char name[100];
  printf("Enter a string : ");
  fgets(name, 100, stdin); // input string
  printf("length is : %d", countLength(name)); // print length
}

int countLength(char arr[])
{
  int count = 0;
  for (int i = 0; arr[i] != '\0'; i++)  // '\0' -- null character -- to end of string
  {
    count++;
  }
  return count - 1;
}