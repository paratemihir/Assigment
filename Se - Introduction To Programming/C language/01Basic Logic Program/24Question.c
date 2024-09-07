// Accept 5 employees name and salary and count average and total salary

#include <stdio.h>
#include <string.h>

int main() {
    char names[5][50];
    float salaries[5];
    float totalSalary = 0.0;
    float averageSalary;
    
    // Input employee names and salaries
    for (int i = 0; i < 5; i++) {
        printf("Enter name of employee %d: ", i + 1);
        fgets(names[i], 50, stdin);
        // Remove trailing newline character if present
        names[i][strcspn(names[i], "\n")] = '\0';
        
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
        // Clear the input buffer
        while (getchar() != '\n'); 

        totalSalary += salaries[i];
    }

    // Calculate average salary
    averageSalary = totalSalary / 5;

    // Output total and average salary
    printf("\nTotal Salary: %.2f\n", totalSalary);
    printf("Average Salary: %.2f\n", averageSalary);

    // Output employee names and their salaries
    printf("\nEmployee Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s, Salary: %.2f\n", names[i], salaries[i]);
    }
}










