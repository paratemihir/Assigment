#include <stdio.h>

main(){
  char a[5];
  printf("Enter String : ");
  gets(a);

  printf("\nString is : %s",a);

  printf("\nLength of string is : %d",strlen(a));
}