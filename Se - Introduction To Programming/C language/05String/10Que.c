// Write a program in C to extract a substring from a given string

#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // Original string
    char substr[100]; // Substring
    int position, length, i;

    // Input the original string
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character if any

    // Input the position and length for the substring
    printf("Enter the position and length of the substring: ");
    scanf("%d %d", &position, &length);

    // Check if the position and length are valid
    if (position + length > strlen(str) || position < 0 || length < 0) {
        printf("Invalid position or length.\n");
        return 1;
    }

    // Extract the substring
    strncpy(substr, str + position, length);
    substr[length] = '\0'; // Null-terminate the substring

    // Output the result
    printf("The extracted substring is: %s\n", substr);

    return 0;
}
