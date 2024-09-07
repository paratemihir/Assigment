/*Write a program in C to count the total number of vowels or consonants in a string*/

#include <stdio.h>

int main()
{
  char str[50], ch;
  int vowel = 0, consonant = 0;
  printf("Enter a string : ");
  fgets(str, 50, stdin);

  for (int i = 0; str[i] != '\0'; i++)
  {
    ch = str[i];
    if (ch >= 'a' && ch <= 'z')
    {
      // check vowels in string
      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
      {
        vowel++; // count vowel
      }
      else
      {
        consonant++;  // count consonant
      }
    }
  }

  printf("Vowels is : %d", vowel);
  printf("\nConsonant is : %d", consonant);
}