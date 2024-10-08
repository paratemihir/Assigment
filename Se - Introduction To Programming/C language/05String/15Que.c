// Write a program in C to find the largest and smallest words in a string

#include <stdio.h>
#include <string.h>

int main()
{
  char string[] = "hello, my name is mihir";
  char words[100][100], small[100], large[100];
  int i = 0, j = 0, k, length;

  for (k = 0; string[k] != '\0'; k++)
  {
    if (string[k] != ' ' && string[k] != '\0')
    {
      words[i][j++] = string[k];
    }
    else
    {
      words[i][j] = '\0';
      // Increment row count to store new word
      i++;
      // Set column count to 0
      j = 0;
    }
  }

  length = i + 1;

  // Initialize small and large with first word in the string
  strcpy(small, words[0]);
  strcpy(large, words[0]);

  // Determine smallest and largest word in the string
  for (k = 0; k < length; k++)
  {
    // Store value of word into small
    if (strlen(small) > strlen(words[k]))
    {
      strcpy(small, words[k]);
    }
    // Store value of word into large
    if (strlen(large) < strlen(words[k]))
      strcpy(large, words[k]);
  }

  printf("Smallest word: %s\n", small);
  printf("Largest word: %s", large);

  return 0;
}