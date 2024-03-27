#include <stdio.h>
#include <stdlib.h>

// Function to allocate memory for a 2D matrix
int **allocateMatrix(int rows, int cols) {
    // Allocate memory for row pointers
    int **matrix = (int **)malloc(rows * sizeof(int *));
    if (matrix == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    // Allocate memory for each row
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Memory allocation failed.\n");
            exit(1);
        }
    }

    return matrix;
}

// Function to free memory allocated for a 2D matrix
void freeMatrix(int **matrix, int rows) {
    // Free memory for each row
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }

    // Free memory for row pointers
    free(matrix);
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Allocate memory for the matrix
    int **matrix = allocateMatrix(rows, cols);

    // Use the matrix as needed...

    // Free memory for the matrix
    freeMatrix(matrix, rows);

    return 0;
}

