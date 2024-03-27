#include <stdio.h>
//#include <ctype.h> // For isspace() and isdigit()

int my_atoi(const char* string) {
    int result = 0;
    int sign = 1; // To handle negative numbers

    // Skip white spaces
    while (isspace((unsigned char)*string)) string++;

    // Check for optional sign
    if (*string == '-') {
        sign = -1;
        string++;
    } else if (*string == '+') {
        string++;
    }

    // Convert string to integer
    while (isdigit((unsigned char)*string)) {
        result = result * 10 + (*string - '0');
        string++;
    }

    return result * sign;
}

int main() {
    char str[] = "   -1234abcd";
    printf("The integer is: %d\n", my_atoi(str));

    return 0;
}

