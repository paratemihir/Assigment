// Accept marks from user and check pass or fail

#include <stdio.h>

int main(){
  int marks;
  printf("enter marks:");
  scanf("%d",&marks);

  if (marks >= 30)   // marks is greater than 30 if user passed
  {
    printf("pass");
  }
  else{             // marks is less than 30 if user fail
    printf("fail");
  }
  
}