#include <stdio.h>
#include <string.h>

void findAndReplace(char *source, const char *find, const char *replace) {
    char temp[1000]; // Temporary buffer to hold the modified string
    char *ptr; // Pointer to keep track of the current position

    // Loop until no more occurrences of 'find' are found in 'source'
    while ((ptr = strstr(source, find)) != NULL) {
        // Copy characters from 'source' until just before the 'find' occurrence
        strncpy(temp, source, ptr - source);
        temp[ptr - source] = '\0'; // Null-terminate the copied string

        // Concatenate the 'replace' string to the temporary buffer
        strcat(temp, replace);

        // Concatenate the remaining characters from 'ptr + length of find' to 'source'
        strcat(temp, ptr + strlen(find));

        // Copy the modified string back to 'source'
        strcpy(source, temp);
    }
}

int main() {
    char source[] = "This is test time";
    const char *find = "is";
    const char *replace = "was";

    printf("Source: %s\n", source);
    printf("Find: %s\n", find);
    printf("Replace: %s\n", replace);

    findAndReplace(source, find, replace);

    printf("Output: %s\n", source);

    return 0;
}

