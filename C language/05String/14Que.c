// Write a program in C to combine two strings manually

#include <stdio.h>

void concateStr(char str1[], char str2[]);

int main()
{
  char str1[50], str2[50];
  printf("Enter str1 : ");
  scanf("%s", str1);
  printf("Enter str2 : ");
  scanf("%s", str2);

  concateStr(str1, str2);
}

void concateStr(char str1[], char str2[])
{
  int i = 0, j = 0;
  char str3[50];
  while (str1[i] != '\0')
  {
    str3[j] = str1[i];
    i++;
    j++;
  }

  i = 0;
  while (str2[i] != '\0')
  {
    str3[j] = str2[i];
    i++;
    j++;
  }

  str3[j] = '\0';
  printf("Concat string : %s", str3);
}