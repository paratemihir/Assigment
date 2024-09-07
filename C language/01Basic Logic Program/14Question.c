// Find ascii value of given number

#include <stdio.h>

int main()
{
  char ch;
  printf("enter character : ");
  scanf("%c",&ch);

  int asciiVal = (int)ch;

  printf("ASCII value %d",asciiVal);

  printf("\n%c = %d",ch , asciiVal);
}
