// Convert days into months

#include <stdio.h>

int main()
{
  int days; 
  float month;
  printf("enter number of days : ");
  scanf("%d", &days);

  // Forumula : for an approximate result, M = D / 30.44

  month = days / 30.44;

  printf("%d days is approximately %.2f month.",days,month);
}