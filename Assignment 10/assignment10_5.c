#include <stdio.h>

// Function to check whether a character is an alphabet or not
int isAlphabet(char ch) {
    // Check if the character is a lowercase letter or an uppercase letter
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        return 1; // It is an alphabet
    else
        return 0; // It is not an alphabet
}

// Function to perform bitwise XOR operation with value 32 if the character is an alphabet
char performXorIfAlphabet(char ch) {
    // Check if the character is an alphabet
    if (isAlphabet(ch)) {
        // Perform XOR operation with 32
        return ch ^ 32;
    } else {
        // If not an alphabet, return the character unchanged
        return ch;
    }
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isAlphabet(ch)) {
        printf("%c is an alphabet.\n", ch);
        char result = performXorIfAlphabet(ch);
        printf("After XOR operation with 32: %c\n", result);
    } else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}

