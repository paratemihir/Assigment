// WAP to check whether a number is negative, positive or zero.

#include <stdio.h>

int main(){
  int num;
  printf("enter a number : ");
  scanf("%d",&num);

  if (num == 0)           // if user enter 0 execute this condition
  {
    printf("number is zero");
  }
  else if (num > 0)        // if user enter positive number execute this condition 
  {
    printf("positive number");
  } 
  else{               // if user enter negative number execute this condition
    printf("negative number");
  }
  
  
}