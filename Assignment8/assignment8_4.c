#include <stdio.h>
#include <string.h>

// Structure to store student information
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

// Function to accept student information from the user
void inputStudentArray(struct Student students[], int size) {
    for (int i = 0; i < size; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Enter Name: ");
        scanf("%s", students[i].name);

        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }
}

// Function to print array of student information
void printStudentArray(struct Student students[], int size) {
    printf("\nStudent Information:\n");
    for (int i = 0; i < size; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
    }
}

// Function to search student information by roll number
void searchByRollNumber(struct Student students[], int size, int rollNumber) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (students[i].rollNumber == rollNumber) {
            printf("\nStudent found by roll number:\n");
            printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nStudent with roll number %d not found.\n", rollNumber);
    }
}

// Function to search student information by name
void searchByName(struct Student students[], int size, const char name[]) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("\nStudent found by name:\n");
            printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
            found = 1;
        }
    }
    if (!found) {
        printf("\nStudent with name %s not found.\n", name);
    }
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);

    struct Student students[size];

    // Accepting student information from user
    inputStudentArray(students, size);

    // Printing the student information
    printStudentArray(students, size);

    // Search by roll number
    int rollNumber;
    printf("\nEnter the roll number to search: ");
    scanf("%d", &rollNumber);
    searchByRollNumber(students, size, rollNumber);

    // Search by name
    char name[50];
    printf("\nEnter the name to search: ");
    scanf("%s", name);
    searchByName(students, size, name);

    return 0;
}

