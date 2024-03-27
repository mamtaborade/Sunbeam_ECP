#include <stdio.h>
#include <string.h>

// Enum to represent grades
enum Grade {
    A,
    B,
    C
};

// Structure to store school student information
struct StudentInfo {
    char name[50];
    int rollNumber;
    int standard;
    union {
        enum Grade grade;  // For standards up to 4th
        float percentage;  // For standards above 4th
    } result;
};

int main() {
    // Define an array to store information of 3 students
    struct StudentInfo students[3];

    // Accept information for each student from the user
    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Standard: ");
        scanf("%d", &students[i].standard);

        // Check if standard is 4th or below
        if (students[i].standard <= 4) {
            printf("Grade (A/B/C): ");
            char grade;
            scanf(" %c", &grade);
            switch (grade) {
                case 'A':
                    students[i].result.grade = A;
                    break;
                case 'B':
                    students[i].result.grade = B;
                    break;
                case 'C':
                    students[i].result.grade = C;
                    break;
                default:
                    printf("Invalid grade input!\n");
                    return 1;
            }
        } else {
            printf("Percentage: ");
            scanf("%f", &students[i].result.percentage);
        }
    }

    // Display the information of all students
    printf("\nStudent Information:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Standard: %d\n", students[i].standard);
        if (students[i].standard <= 4) {
            printf("Grade: %c\n", students[i].result.grade == A ? 'A' : students[i].result.grade == B ? 'B' : 'C');
        } else {
            printf("Percentage: %.2f\n", students[i].result.percentage);
        }
    }

    return 0;
}

