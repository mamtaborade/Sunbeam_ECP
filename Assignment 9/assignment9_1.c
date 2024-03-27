#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    // Open the file in read mode
    file = fopen("input.txt", "r");

    // Check if file exists and can be opened
    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    // Read character by character until EOF is reached
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    // Close the file
    fclose(file);

    return 0;
}

