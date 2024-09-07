// C Program to Check Uppercase or Lowercase or Digit or Special Character

#include <stdio.h>
#include <ctype.h>  // Include ctype library for character type functions

// using inbuild method
/*
int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    //character is uppercase
    if (isupper(ch)) {
        printf("%c is an uppercase letter.\n", ch);
    }
    //character is lowercase
    else if (islower(ch)) {
        printf("%c is a lowercase letter.\n", ch);
    }
    //character is a digit
    else if (isdigit(ch)) {
        printf("%c is a digit.\n", ch);
    }
    //special character
    else {
        printf("%c is a special character.\n", ch);
    }

}
*/

// Without inbuid method
int main(){
  char ch;
  printf("enter a character : ");
  scanf("%c",&ch);

  // Uppercase
  if (ch >= 'A' && ch <= 'Z')  
  {
    printf("Uppercase letter");
  }
  // lowercase
  else if (ch >= 'a' && ch <= 'z')    
  {
    printf("Lowercase leter");
  }
  // Digit
  else if (ch >= '0' && ch <= '9')
  {
    printf("%c is a digit",ch);
  }
  // Special character
  else{
    printf("Special character");
  }
}
