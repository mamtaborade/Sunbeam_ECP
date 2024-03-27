#include <stdio.h>
#include <stdbool.h>

// Function to remove all occurrences of any character in string1 from string2
void removeCharsFromStr(char *string1, char *string2) {
    char *src, *dest;
    bool toRemove[256] = {false}; // Assuming ASCII characters
    
    // Mark characters for removal
    for (src = string1; *src != '\0'; src++) {
        toRemove[(unsigned char)*src] = true;
    }
    
    // Remove characters
    for (src = dest = string2; *src != '\0'; src++) {
        if (!toRemove[(unsigned char)*src]) {
            *dest++ = *src;
        }
    }
    *dest = '\0'; // Null-terminate the modified string
}

int main() {
    char str1[] = "aeiou"; // Characters to remove from str2
    char str2[] = "Hello, World!";
    
    printf("Original str2: %s\n", str2);
    removeCharsFromStr(str1, str2);
    printf("Modified str2 after removing characters in str1: %s\n", str2);
    
    return 0;
}

