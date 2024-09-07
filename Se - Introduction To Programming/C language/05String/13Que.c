// Write a program in C to remove characters from a string except alphabets.

#include <stdio.h>

int main()
{
  char str[100];
  int i = 0, j = 0;
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin); // Read string

  while (str[i] != '\0')
  {
    // Manually check if the character is an alphabet
    if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
    {
      str[j++] = str[i]; // If it is, add it to the filtered string
    }
    i++;
  }
  str[j] = '\0';

  printf("Filtered string: %s\n", str);
}
