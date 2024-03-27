#include <stdio.h>
#include <stdint.h>

// Structure to store school student information
struct StudentInfo {
    char name[50];
    uint8_t rollNumber;  // Assuming roll number doesn't exceed 255
    unsigned int standard : 4;  // Standard field occupies 4 bits
    unsigned int gender : 1;    // Gender represented as a single bit (0 or 1)
    unsigned int age : 5;       // Age represented using 5 bits (maximum 32 years)
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
        scanf("%hhu", &students[i].rollNumber);

        printf("Standard (1-12): ");
        scanf("%u", &students[i].standard);
        if (students[i].standard < 1 || students[i].standard > 12) {
            printf("Invalid standard input!\n");
            return 1;
        }

        printf("Gender (0 for male, 1 for female): ");
        scanf("%u", &students[i].gender);
        if (students[i].gender > 1) {
            printf("Invalid gender input!\n");
            return 1;
        }

        printf("Age (1-32): ");
        scanf("%u", &students[i].age);
        if (students[i].age < 1 || students[i].age > 32) {
            printf("Invalid age input!\n");
            return 1;
        }
    }

    // Display the information of all students
    printf("\nStudent Information:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %hhu\n", students[i].rollNumber);
        printf("Standard: %u\n", students[i].standard);
        printf("Gender: %s\n", students[i].gender ? "Female" : "Male");
        printf("Age: %u\n", students[i].age);
    }

    return 0;
}

