/*Write a program in C to compare two strings without using string library functions.*/

#include <stdio.h>
// #include <string.h>
int stringCmp(char str1[], char str2[]);

int main()
{
  char name1[20], name2[20];
  gets(name1);
  gets(name2);
  if (stringCmp(name1, name2) == 0)
  {
    printf("Same"); // if string is same -- executer condtion
  }
  else
  {
    printf("Not same"); // nor string is not same -- execute else
  }
}

int stringCmp(char str1[], char str2[])
{
  int cmp = 0;
  int i = 0;
  while (str1[i] != '\0' && str2[i] != '\0')
  {
    if (str1[i] != str2[i])
    {
      return 1; // sting not same
    }
    i++;
  }
  if (str1[i] == '\0' && str2[i] == '\0')
  {
    return 0; // same string
  }
  else
  {
    return 1; // string not same
  }
}