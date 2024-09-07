/*WAP to reverse a string and check that the string is palindrome or not
palindrome means reads the same backward or forward
Ex : ma'am = ma'am , racecar = racecar , naman = naman
*/

#include <stdio.h>
#include <string.h>
int main()
{
  // inbuild method
  /*
  char str1[50],str2[50];
  printf("Enter a string : ");
  gets(str1);
  strcpy(str2,str1);   // copy str1 to str2
  strrev(str2);  // reverce of str2

  if (strcmp(str1,str2) == 0)
  {
    printf("String is Plindrome");
  }
  else{
    printf("Not palindrome");
  }
  */

  // without inbuild method
  char str[50];
  int i, length, check = 0;
  printf("Enter a string : ");
  gets(str);

  length = strlen(str);
  for (i = 0; i < length; i++)
  {
    if (str[i] != str[length-i-1])
    {
      check = 1;
      break;
    }
  }
  if (check == 0)
  {
    printf("String is palindrome");
  }
  else{
    printf("Not palindrome");
  }
  
}
