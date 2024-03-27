#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_NAMES 5
#define MAX_NAME_LENGTH 50

// Function to accept names of students from the user
void acceptNames(char *names[]) {
    printf("Enter the names of %d students:\n", NUM_NAMES);
    for (int i = 0; i < NUM_NAMES; i++) {
        names[i] = (char *)malloc(MAX_NAME_LENGTH * sizeof(char));
        if (names[i] == NULL) {
            printf("Memory allocation failed.\n");
            exit(1);
        }
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }
}

// Function to print the names of students
void printNames(char *names[]) {
    printf("Names of students:\n");
    for (int i = 0; i < NUM_NAMES; i++) {
        printf("%s\n", names[i]);
    }
}

// Function to compare two strings (names) for sorting
int compareNames(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

// Function to sort the names of students
void sortNames(char *names[]) {
    qsort(names, NUM_NAMES, sizeof(names[0]), compareNames);
}

// Function to free memory allocated for student names
void freeMemory(char *names[]) {
    for (int i = 0; i < NUM_NAMES; i++) {
        free(names[i]);
    }
}

int main() {
    char *studentNames[NUM_NAMES];

    // Accept names of students
    acceptNames(studentNames);

    // Print the names before sorting
    printf("\nBefore sorting:\n");
    printNames(studentNames);

    // Sort the names
    sortNames(studentNames);

    // Print the names after sorting
    printf("\nAfter sorting:\n");
    printNames(studentNames);

    // Free memory allocated for student names
    freeMemory(studentNames);

    return 0;
}

