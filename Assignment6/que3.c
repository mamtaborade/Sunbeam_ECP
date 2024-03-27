#include <stdio.h>

void removeChar(char* str, char charToRemove) {
    char* src, *dest;
    for (src = dest = str; *src != '\0'; src++) {
        *dest = *src;
        if (*dest != charToRemove) dest++;
    }
    *dest = '\0';
}

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);
    
    removeChar(str, 'l');
    printf("After removing 'l': %s\n", str);
    
    return 0;
}

