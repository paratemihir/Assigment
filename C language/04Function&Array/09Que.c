// WAP to show difference between Structure and Union.

#include <stdio.h>

// Structure
struct employee
{
  int empNo;
  char empName[50];
  float empSalary;
};

// Union
union student
{
  int no;
  char stuName;
  int std;
};

int main()
{
  // Structure
  struct employee emp;
  emp.empNo = 1;
  emp.empSalary = 20000;
  // printf("%d", emp.empNo);
  // printf("%.2f", emp.empSalary);

  // Union
  union student s;
  s.no = 1;
  s.std = 5;
  // printf("%d", s.no);
  printf("%d", s.std);
}