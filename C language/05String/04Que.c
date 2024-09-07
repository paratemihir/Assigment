// Write a program in C to count the total number of words in a string.

#include <stdio.h>

int main()
{
  char str[50];
  int word = 1; // word count start with 1
  printf("Enter a string : ");
  fgets(str, 50, stdin); // input a string
  int i = 0;
  while (str[i] != '\0') // '\0' - end of string (null character)
  {
    if (str[i] == ' ')
    {
      word++;
    }
    i++;
  }
  printf("Number of words : %d", word);
}