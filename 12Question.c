/*Accept number of students from user. I need to give 5 apples to each
student. How many apples are required?*/

#include <stdio.h>

int main(){
  int numOfstu;
  printf("number of students is : ");
  scanf("%d",&numOfstu);

  int formula = 5 * numOfstu;
  printf("%d apples are required.",formula);
}