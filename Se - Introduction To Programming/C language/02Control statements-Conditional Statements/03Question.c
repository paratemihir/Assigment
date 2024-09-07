// WAP to check if the given year is a leap year or not.

#include <stdio.h>

int main()
{
  // 1200, 1600, 2000, 2400 etc --gap 400year (leap year)
  // 2012, 2016, 2020, 2024 etc --gap 4year 
  // 2100, 2200, 2300, not leap year

  int year;
  printf("enter year : ");
  scanf("%d",&year);

  if (year%400 == 0 || year%4 == 0 && year%100 != 0)
  {
    printf("%d year is Leapyear",year);
  }
  else{
    printf("%d is not leap year",year);
  }
  
}
