// Convert school’s name in abbreviated form

#include <stdio.h>

int main() {
    char school_name[] = "Silver oak university";
    char acronym[10]; // Assuming a maximum acronym length of 9 characters + '\0'

    // Generate acronym from the school name
    int j = 0;
    acronym[j++] = school_name[0]; // Start with the first character

    for (int i = 1; school_name[i] != '\0'; i++) {
        if (school_name[i] == ' ' && school_name[i+1] != '\0') {
            acronym[j++] = school_name[i+1]; // Append the next character after space
        }
    }
    acronym[j] = '\0'; // Null-Character

    // Print the generated acronym
    printf("Abbreviation for '%s' is '%s'\n", school_name, acronym);

}


