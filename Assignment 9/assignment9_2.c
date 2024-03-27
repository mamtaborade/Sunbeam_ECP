#include <stdio.h>

// Function to copy file character by character
void copyFile(FILE *source, FILE *destination) {
    char ch;

    // Read character by character until EOF is reached
    while ((ch = fgetc(source)) != EOF) {
        // Write character to the destination file
        fputc(ch, destination);
    }
}

int main() {
    FILE *sourceFile, *destinationFile;
    char ch;

    // Open source file in read mode
    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("Could not open the source file.\n");
        return 1;
    }

    // Open destination file in write mode
    destinationFile = fopen("destination.txt", "w");
    if (destinationFile == NULL) {
        printf("Could not create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy contents of source file to destination file
    copyFile(sourceFile, destinationFile);

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    // Open destination file in read mode to display its contents
    destinationFile = fopen("destination.txt", "r");
    if (destinationFile == NULL) {
        printf("Could not open the destination file.\n");
        return 1;
    }

    // Display contents of the destination file
    printf("Contents of the destination file:\n");
    while ((ch = fgetc(destinationFile)) != EOF) {
        printf("%c", ch);
    }
    printf("\n");

    // Close the destination file
    fclose(destinationFile);

    // Open destination file in append mode to accept data from user and write to destination file
    destinationFile = fopen("destination.txt", "a");
    if (destinationFile == NULL) {
        printf("Could not open the destination file for appending.\n");
        return 1;
    }

    // Accept data from user and write to destination file
    printf("Enter data to append to the destination file (Enter '!' to stop):\n");
    while ((ch = getchar()) != '!') {
        fputc(ch, destinationFile);
    }

    // Close the destination file
    fclose(destinationFile);

    printf("Data has been appended to the destination file.\n");

    return 0;
}

