/*Write a C program to determine eligibility for admission to a professional
course based on the following criteria.
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/

#include <stdio.h>

int main()
{
  printf("*Eligibility for admission to a professional course based on the following criteria.*\n");
  int Math, Phy, Chem;
  printf("Enter Maths Marks : ");
  scanf("%d", &Math);
  printf("Enter Physics Marks : ");
  scanf("%d", &Phy);
  printf("Enter Chemistry Marks : ");
  scanf("%d", &Chem);

  int Total;
  Total = Math + Phy + Chem;
  printf("Total marks is : %d\n", Total);

  int Ma_Ph = Math + Phy;
  printf("Total marks of Maths and Physics : %d", Ma_Ph);

  if (Math >= 65 && Phy >= 55 && Chem >= 50 && Total >= 190 || Ma_Ph >= 140)
  {
    printf("\nCandidate is eligible");
  }
  else
  {
    printf("\nCandidate is not eligible");
  }
}
