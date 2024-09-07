// Calculate the Sum of Natural Numbers Using the While Loop

#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Using a while loop to calculate the sum of natural numbers
    while (i <= n) {
        sum += i;  
        i++;       // Increment the counter
    }

    printf("Sum of natural numbers is %d\n",sum);

}

