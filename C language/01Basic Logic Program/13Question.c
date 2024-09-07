// Find ascii value of given number
#include <stdio.h>

int main()
{
  int asciiVal;
  printf("enter ASCII value : ");
  scanf("%d",&asciiVal);

  char ch = (char)asciiVal;
  
  printf("character for %c",ch);

  printf("\n%d = %c",asciiVal ,ch);

}