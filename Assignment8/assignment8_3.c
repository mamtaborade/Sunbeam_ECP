#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};


void inputStudentArray(struct Student *students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("Enter Roll Number for Student %d: ", i + 1);
        scanf("%d", &students[i].rollNumber);

        printf("Enter Name for Student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter Marks for Student %d: ", i + 1);
        scanf("%f", &students[i].marks);
    }
}


void printStudentArray(struct Student *students, int numStudents) {
    printf("\nStudent Information:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student students[numStudents];


    inputStudentArray(students, numStudents);


    printStudentArray(students, numStudents);

    return 0;
}

