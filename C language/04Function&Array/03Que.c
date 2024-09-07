// WAP to find reverse of string using recursion

#include <stdio.h>
#include <string.h>

void reverseString(char *str, int start, int end)
{
  char temp;
  if (start >= end)
    return;

  // Swapping the start and end characters
  temp = str[start];
  str[start] = str[end];
  str[end] = temp;

  // Recursive call
  reverseString(str, start + 1, end - 1);
}

int stringLength(char *str)
{
  int length = 0;
  while (str[length] != '\0')
  {
    length++;
  }
  return length;
}

int main()
{
  char str[100];

  printf("Enter a string: ");
  fgets(str, 100, stdin);      // Read string with spaces
  str[strcspn(str, "\n")] = 0; // Remove newline character

  int length = stringLength(str); // Manually calculate string length
  reverseString(str, 0, length - 1);

  printf("Reversed string: %s\n", str);
  return 0;
}