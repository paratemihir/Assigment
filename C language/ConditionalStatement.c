#include <stdio.h>
/*
void main(){
  int age;
  printf("enter age : ");
  scanf("%d",&age);
  if (age>=100)
  {
    printf("Invalid age");
  }
  else if (age >= 18)
  {
    printf("you are valid for voting");
  }
  else{
    printf("not eligible for voting");
  }
}
*/

/*
void main(){
  int num1,num2;
  printf("enter num1 : ");
  scanf("%d",&num1);

  printf("enter num2 : ");
  scanf("%d",&num2);

  if (num1 > num2)
  {
    printf("%d is greatest",num1);
  }
  else{
    printf("%d is greatest",num2);
  }
}
*/

void main()
{
  int n1, n2, n3;
  printf("enter n1 : ");
  scanf("%d", &n1);

  printf("enter n2 : ");
  scanf("%d", &n2);

  printf("enter n3 : ");
  scanf("%d", &n3);

  if (n1 > n2)
  {
    if (n1 > n3)
    {
      printf("%d is Greatest", n1);
    }
    else
    {
      printf("%d is Greatest", n2);
    }
  }
  if (n2 > n3)
  {
    if (n2 > n1)
    {
      printf("%d is Greatest",n3);
    }
    else{
      printf("%d is Greatest",n3);
    }   
  }
  
}