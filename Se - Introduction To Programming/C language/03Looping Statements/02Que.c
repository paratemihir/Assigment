// WAP to accept 5 numbers from user and display all numbers

#include <stdio.h>

int main(){
  int n[5];
  printf("enter 5 numbers : \n");

  // user input
  for (int i = 0; i < 5; i++)
  {
    scanf("%d",&n[i]);
  }
  

  // Display the numbers
  printf("Display the number:\n");
  for (int i = 0; i < 5; i++)
  {
    printf("%d\n",n[i]);
  }
}
