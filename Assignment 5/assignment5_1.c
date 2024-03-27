#include <stdio.h>

int main() {
    // Declaring variables
    int marks[5];
    int total = 0;
    float average;

    // Accepting marks for five subjects
    printf("Enter marks for five subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    // Calculating average
    average = (float)total / 5.0;

    // Displaying total and average
    printf("\nTotal marks: %d\n", total);
    printf("Average marks: %.2f\n", average);

    return 0;
}

