#include <stdio.h>

// Function to add two matrices
void addMatrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to subtract one matrix from another
void subtractMatrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
    int temp;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            temp = 0;
            for (int k = 0; k < 3; k++) {
                temp += mat1[i][k] * mat2[k][j];
            }
            result[i][j] = temp;
        }
    }
}

// Function to print a matrix
void printMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[3][3];

    printf("Matrix 1:\n");
    printMatrix(matrix1);

    printf("\nMatrix 2:\n");
    printMatrix(matrix2);

    // Add matrices
    printf("\nAddition:\n");
    addMatrices(matrix1, matrix2, result);
    printMatrix(result);

    // Subtract matrices
    printf("\nSubtraction:\n");
    subtractMatrices(matrix1, matrix2, result);
    printMatrix(result);

    // Multiply matrices
    printf("\nMultiplication:\n");
    multiplyMatrices(matrix1, matrix2, result);
    printMatrix(result);

    return 0;
}

