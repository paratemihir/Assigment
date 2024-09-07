/*WAP to accept the height of a person in centimeters and categorize the
person according to their height*/

#include <stdio.h>

int main(){
  float height;
  printf("enter your height:");
  scanf("%f",&height);

  if (height < 150)
  {
    printf("Short heigth");    // short height < 150
  }
  else if (height >= 150 && height <= 180 ) //average height 150 to 180
  {
    printf("Average height");
  }
  else{
    printf("Tall");  // otherwise tall
  }
  
  
}