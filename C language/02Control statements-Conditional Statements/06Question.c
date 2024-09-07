// Find the Character Is Vowel or Not
// Vowels = a,e,i,o,u
#include <stdio.h>
// First way
/*
int main()
{
  char ch;
  printf("enter a character : ");
  scanf("%c",&ch);

  if (ch == 'a' || ch == 'A' || ch == 'e'|| ch == 'E'|| ch == 'i'|| ch == 'I'|| ch == 'o'|| ch == 'O'|| ch == 'u'|| ch == 'U' )
  {
    printf("%c is vowel",ch);
  }
  else{
    printf("%c is not vowel",ch);
  } 
}
*/



// Second way
int isVowel(char ch){
  if (ch == 'a' || ch == 'A' || ch == 'e'|| ch == 'E'|| ch == 'i'|| ch == 'I'|| ch == 'o'|| ch == 'O'|| ch == 'u'|| ch == 'U'){
    return 1;  // true - is vowel
  }
  else{
    return 0; // false - is not vowel
  }
}

int main(){
  char ch;
  printf("enter a character : ");
  scanf("%c",&ch);
  if (isVowel(ch))
  {
    printf("%c is vowel",ch);
  }
  else{
    printf("%c is not vowel",ch); 
  }
}
