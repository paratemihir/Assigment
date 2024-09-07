/*Write a program in C to count the total number of alphabets, digits and special
characters in a string.*/

#include <stdio.h>
#include <string.h>
int main(){
  char str[50];
  int alphabet=0,digit=0,specialCh=0;
  printf("Enter a string : "); // input string
  gets(str);

  int i = 0;
  while (str[i] != '\0')
  {
    // find Alphabet
    if ((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z'))
    {
      alphabet++;
    }
    // find digits
    else if (str[i]>='0'&&str[i]<='9')
    {
      digit++;
    }
    // find special character
    else{
      specialCh++;
    }
    i++;
  }

  printf("Alphabets is : %d",alphabet);
  printf("\nDigit is : %d",digit);
  printf("\nSpecial characters is : %d",specialCh);
  
}