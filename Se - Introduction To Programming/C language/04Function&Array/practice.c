#include <stdio.h>

// Define the structure for an employee
typedef struct {
    int empno;
    char empname[50];
    char address[100];
    int age;
} Employee;

// Function to input employee data
void inputEmployee(Employee *emp) {
    printf("Enter employee number: ");
    scanf("%d", &emp->empno);
    printf("Enter employee name: ");
    scanf("%s", emp->empname);  // Using %s assumes no spaces in name for simplicity
    printf("Enter address: ");
    scanf("%s", emp->address);  // Using %s assumes no spaces in address for simplicity
    printf("Enter age: ");
    scanf("%d", &emp->age);
}

// Function to display employee data
void displayEmployee(Employee emp) {
    printf("\nEmployee Number: %d", emp.empno);
    printf("\nEmployee Name: %s", emp.empname);
    printf("\nAddress: %s", emp.address);
    printf("\nAge: %d\n", emp.age);
}

int main() {
    Employee employees[5];  // Array to store data for five employees

    // Input data for five employees
    for (int i = 0; i < 5; i++) {
        printf("Enter details for employee %d\n", i + 1);
        inputEmployee(&employees[i]);
    }

    // Display data for five employees
    printf("\nEmployee Details:\n");
    for (int i = 0; i < 5; i++) {
        displayEmployee(employees[i]);
    }

    return 0;
}
