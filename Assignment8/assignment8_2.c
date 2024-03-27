#include <stdio.h>


struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

void inputStudentInfo(struct Student *student) {
    printf("Enter Roll Number: ");
    scanf("%d", &student->rollNumber);

    printf("Enter Name: ");
    scanf("%s", student->name);

    printf("Enter Marks: ");
    scanf("%f", &student->marks);
}

void printStudentInfo(struct Student student) {
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);
}

int main() {
    struct Student student;


    inputStudentInfo(&student);

    printStudentInfo(student);

    return 0;
}

