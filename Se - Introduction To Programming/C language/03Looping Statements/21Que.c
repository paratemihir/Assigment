/*Accept 3 numbers from user using while loop and check each numbers
palindrome*/

#include <stdio.h>

int main(){
  int n,i,x,sum = 0;
  printf("Enter a number : ");
  scanf("%d",&n);
  x=n;  // x store orignal value
  while (n != 0)
  {
    int r = n % 10;
    sum = r + (sum * 10);
    n = n / 10;
  }

  if (x == sum) 
  {
    printf("It is palindrome number");
  }
  else{
    printf("Not palindrome number");
  }
  
  
}