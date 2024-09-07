// WAP to perform Palindrome number using for loop and function


#include <stdio.h>

// Function declaration
int Palindrome(int num);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Function call
    if (Palindrome(num)) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }
}

// Function to check if a number is a palindrome
int Palindrome(int num) {
    int reversed = 0, original = num, remainder;

    // Using a for loop to reverse the digits of the number
    for (; num != 0; num /= 10) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
    }

    // Check if the original number is equal to its reverse
    return original == reversed;
}
