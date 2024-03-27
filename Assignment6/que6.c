#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

void reverse(char *str, int length) {
    int start = 0;
    int end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

char* itoa(int value, char *str, int base) {
    if (base < 2 || base > 16) {
        str[0] = '\0';
        return str; // Base not supported.
    }

    int i = 0;
    bool isNegative = false;

    // Handle 0 explicitly, otherwise empty string is returned for 0
    if (value == 0) {
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }

    // In standard itoa(), negative numbers are handled only with base 10.
    // Otherwise, numbers are treated as unsigned.
    if (value < 0 && base == 10) {
        isNegative = true;
        value = -value;
    }

    // Process individual digits
    while (value != 0) {
        int remainder = value % base;
        str[i++] = (remainder > 9)? (remainder - 10) + 'a' : remainder + '0';
        value = value / base;
    }

    // If number is negative, append '-'
    if (isNegative) {
        str[i++] = '-';
    }

    str[i] = '\0'; // Append string terminator

    // Reverse the string
    reverse(str, i);

    return str;
}

int main() {
    char buffer[50];
    int number = -12345;
    int base = 10;

    printf("Original number: %d\n", number);
    itoa(number, buffer, base);
    printf("Converted to base %d: %s\n", base, buffer);

    return 0;
}

