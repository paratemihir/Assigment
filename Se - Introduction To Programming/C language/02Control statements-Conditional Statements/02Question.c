/*Write a C program to read the value of an integer m and display the value of
m is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0 */

#include <stdio.h>

int main(){
  int m;
  printf("enter m : ");
  scanf("%d",&m);

  if (m > 0)   //m is 1 when m is larger than 0
  {
    printf("m is larger than 0");
  }
  else if (m == 0)  // 0 when m is 0
  {
    printf("m is 0");
  }
  else{             //-1 when m is less than 0
    printf("m is less than 0(-1)");
  }
}

