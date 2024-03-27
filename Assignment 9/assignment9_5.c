#include <stdio.h>

// Structure to store student information
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

// Function to write student record to a text file using formatted I/O
void writeStudentRecordToFile(const char *filename, const struct Student *student) {
    FILE *file = fopen(filename, "a"); // Open file in append mode
    if (file == NULL) {
        printf("Error opening file %s.\n", filename);
        return;
    }
    
    // Write student record to the file using formatted output
    fprintf(file, "%d %s %.2f\n", student->rollNumber, student->name, student->marks);

    fclose(file); // Close the file
}

// Function to read student records from a text file using formatted I/O
void readStudentRecordFromFile(const char *filename) {
    FILE *file = fopen(filename, "r"); // Open file in read mode
    if (file == NULL) {
        printf("Error opening file %s.\n", filename);
        return;
    }

    struct Student student;

    // Read student records from the file using formatted input
    printf("\nStudent Records:\n");
    while (fscanf(file, "%d %s %f", &student.rollNumber, student.name, &student.marks) != EOF) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", student.rollNumber, student.name, student.marks);
    }

    fclose(file); // Close the file
}

int main() {
    // Writing student records to a text file
    struct Student student1 = {101, "Mamta", 85.5};
    struct Student student2 = {102, "Virat", 90.0};
    struct Student student3 = {103, "Shrutika", 75.0};

    writeStudentRecordToFile("student_records.txt", &student1);
    writeStudentRecordToFile("student_records.txt", &student2);
    writeStudentRecordToFile("student_records.txt", &student3);

    // Reading student records from the same text file
    readStudentRecordFromFile("student_records.txt");

    return 0;
}

