#include <stdio.h>
#include <string.h>

// Structure to store student information
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

// Function to swap two students
void swapStudents(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort array of student information by roll number
void sortByRollNumber(struct Student students[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].rollNumber > students[j + 1].rollNumber) {
                swapStudents(&students[j], &students[j + 1]);
            }
        }
    }
}

// Function to sort array of student information by name
void sortByName(struct Student students[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(students[j].name, students[j + 1].name) > 0) {
                swapStudents(&students[j], &students[j + 1]);
            }
        }
    }
}

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

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);

    struct Student students[size];

    // Accepting student information from user
    inputStudentArray(students, size);

    // Printing the unsorted student information
    printf("\nUnsorted Student Information:\n");
    printStudentArray(students, size);

    // Sorting by roll number
    sortByRollNumber(students, size);
    printf("\nSorted Student Information by Roll Number:\n");
    printStudentArray(students, size);

    // Sorting by name
    sortByName(students, size);
    printf("\nSorted Student Information by Name:\n");
    printStudentArray(students, size);

    return 0;
}

