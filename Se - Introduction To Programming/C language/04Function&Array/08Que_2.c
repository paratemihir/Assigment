/*Write a program of structure employee that provides the following
a. information -print and display empno, empname, address and age
b. Write a program of structure for five employee that provides the following information -print and display empno, empname, address andage*/

#include <stdio.h>

typedef struct employee
{
  int emno;
  char empname[50];
  char address[50];
  int age;
} Employe;

void inputEmp(Employe *emp);
void display(Employe emp);

int main()
{
  Employe employees[5];
  // Input data - five employee
  for (int i = 0; i < 5; i++)
  {
    printf("Enter details for employee %d\n", i + 1);
    inputEmp(&employees[i]);
  }

  // print data - five employee
  printf("\nEmployee Details:\n");
  for (int i = 0; i < 5; i++)
  {
    display(employees[i]);
  }
}

void inputEmp(Employe *emp)
{
  printf("Enter employee number : ");
  scanf("%d", &emp->emno);
  printf("Enter employee name : ");
  scanf("%s", &emp->empname);
  printf("Enter employee address : ");
  scanf("%s", &emp->address);
  printf("Enter employee age : ");
  scanf("%d", &emp->age);
}

void display(Employe emp)
{
  printf("\nemployee number : %d", emp.emno);
  printf("\nemployee name : %s", emp.empname);
  printf("\nemployee adress : %s", emp.address);
  printf("\nemployee age : %d\n", emp.age);
}