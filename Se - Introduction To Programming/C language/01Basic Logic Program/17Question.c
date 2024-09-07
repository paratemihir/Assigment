// Calculate person’s insurance premium based on salary

#include <stdio.h>

int main(){
  float salary;
  printf("enter your salary : ");
  scanf("%f",&salary);                           // salary is : 25000

  printf("premium rate is 5 percent.");

  float premium = salary * 0.05;  // 5%             // 25000 * 5% = 1250(insurance)

  printf("\ninsurance premium is : %.2f",premium); 
}