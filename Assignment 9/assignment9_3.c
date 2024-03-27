#include <stdio.h>
#include <stdlib.h>

// Function to copy file line by line
void copyFileLineByLine(FILE *sourceFile, FILE *destinationFile) {
    char buffer[1000]; // Buffer to store each line

    // Read each line from source file and write to destination file
    while (fgets(buffer, sizeof(buffer), sourceFile) != NULL) {
        fputs(buffer, destinationFile);
    }
}

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFileName[100], destinationFileName[100];
    char inputBuffer[1000]; // Buffer to store user input

    // Open source file in read mode
    printf("Enter source file name: ");
    scanf("%s", sourceFileName);
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    // Open destination file in write mode
    printf("Enter destination file name: ");
    scanf("%s", destinationFileName);
    destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL) {
        printf("Error opening destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy contents from source file to destination file line by line
    copyFileLineByLine(sourceFile, destinationFile);

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    // Open destination file to display its contents
    destinationFile = fopen(destinationFileName, "r");
    if (destinationFile == NULL) {
        printf("Error opening destination file.\n");
        return 1;
    }

    // Display contents of destination file
    printf("\nContents of destination file:\n");
    while (fgets(inputBuffer, sizeof(inputBuffer), destinationFile) != NULL) {
        printf("%s", inputBuffer);
    }

    // Close destination file
    fclose(destinationFile);

    // Open destination file again to append user input
    destinationFile = fopen(destinationFileName, "a");
    if (destinationFile == NULL) {
        printf("Error opening destination file.\n");
        return 1;
    }

    // Accept data from user and write to destination file
    printf("\nEnter data to append to destination file (enter '!' to stop):\n");
    while (1) {
        scanf(" %[^\n]", inputBuffer);
        if (inputBuffer[0] == '!' && inputBuffer[1] == '\0') {
            break; // Stop if user enters '!'
        }
        fprintf(destinationFile, "%s\n", inputBuffer); // Append user input to destination file
    }

    // Close destination file
    fclose(destinationFile);

    printf("\nData appended to destination file successfully.\n");

    return 0;
}

