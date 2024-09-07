/*Write a program in C to read a sentence and replace lowercase characters with
uppercase and vice versa.*/


#include <stdio.h>

int main(){
  char str[50];

  printf("Enter a sentence : ");
  fgets(str,100,stdin);

  for (int i = 0; str[i] != '\0'; i++)
  {
    // if character is lowercase convert to uppercase
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      str[i] = str[i] - 'a' + 'A';
    }
    // character is uppercase convert to lowercasee
    else if (str[i] >= 'A' && str[i] <= 'Z')
    {
      str[i] = str[i] - 'A' + 'a';
    }
  }
  
  printf("Convert Sentence is : %s",str);
}