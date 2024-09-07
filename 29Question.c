// Convert minutes into seconds and hours

#include <stdio.h>

int main(){
  int minutes,second;
  float hours;
  printf("enter minutes : ");
  scanf("%d",&minutes);

  second = minutes * 60;
  printf("Seconds : %dsec",second);

  hours = minutes / 60.0;   // 60.0 because of hours and minute ex:1.20 ,only 60 is print only 1,2 hours 
  printf("\nHours : %.2fhour",hours);


}