// WAP to convert years into days and days into years

#include <stdio.h>

int main()
{
  int years, days;

  // Convert year into days
  printf("enter years : ");
  scanf("%d", &years);
  days = years * 365;       //Formula = years * 365 
  printf("%d years into days : %d", years, days);


  // Convert days into years
  float convertYears;
  printf("\nenter days : ");
  scanf("%d",&days);
  convertYears = days / 365.0;    //Formula = days / 365.0
  printf("%d days into years: %.2f",days,convertYears);

}
