// Accept 5 expense from user and find average of expense
#include <stdio.h>


int main() {
    float expenses[5];
    float totalExpense = 0.0;
    float averageExpense;
    
    // Input expenses from the user
    for (int i = 0; i < 5; i++) {
        printf("Enter expense %d: ", i + 1);
        if (scanf("%f", &expenses[i]) != 1) {
            printf("Invalid input. Please enter a valid number.\n");
            return 1; // Exit the program if invalid input
        }

        totalExpense += expenses[i];
    }

    // Calculate average expense
    averageExpense = totalExpense / 5;

    // Output total and average expense
    printf("\nTotal Expense: %.2f\n", totalExpense);
    printf("Average Expense: %.2f\n", averageExpense);

}
