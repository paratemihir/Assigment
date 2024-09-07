/*WAP to accept 5 students name and store it in array*/

#include <stdio.h>

int main()
{
  char studentName[5][50];

  // user entered students name
  printf("Enter 5 students name : \n");
  for (int i = 0; i < 5; i++)
  {
    scanf("%s", &studentName[i]);
  }


  // store in array and print
  printf("You entered students name : \n");
  for (int i = 0; i < 5 ; i++)
  {
    printf("%s\n",studentName[i]);
  }
  

}
