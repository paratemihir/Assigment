#include <stdio.h>

int main()
{
  char c;

  printf("Enter a character: ");
  scanf(" %c", &c);

  // convert to lowercase if it's an uppercase letter
  if (c >= 'A' && c <= 'Z')
  {
    c += 'a' - 'A'; // Convert uppercase to lowercase
  }

  switch (c)
  {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    printf("%c is a vowel.\n", c);
    break;
  case 'b':
  case 'c':
  case 'd':
  case 'f':
  case 'g':
  case 'h':
  case 'j':
  case 'k':
  case 'l':
  case 'm':
  case 'n':
  case 'p':
  case 'q':
  case 'r':
  case 's':
  case 't':
  case 'v':
  case 'w':
  case 'x':
  case 'y':
  case 'z':
    printf("%c is a consonant.\n", c);
    break;
  default:
    printf("%c is not a valid alphabet character.\n", c);
  }
}
