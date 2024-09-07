// 1 + 2 + 3 + 4 + 5 + ... + n

#include <stdio.h>

int main(){
  int n,sum = 0;
  printf("Enter number : ");
  scanf("%d",&n);

  for (int i = 1; i <= n; i++)
  {
    sum = sum + i;
  }

  printf("Sum of the number is : %d",sum);
  
}