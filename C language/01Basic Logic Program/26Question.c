// Convert temperature Fahrenheit to Celsius

// Formula : C = (F - 32) * 5/9

#include <stdio.h>

int main()
{
  float Fehrenheit, Celsius;
  printf("enter temprature in Fehrenheit : ");
  scanf("%f", &Fehrenheit);

  Celsius = (Fehrenheit - 32) * 5/9;

  printf("Tempereture in celsius : %.2f",Celsius);
}
