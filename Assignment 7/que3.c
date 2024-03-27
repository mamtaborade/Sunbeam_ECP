#include <stdio.h>

// Function to calculate the sum of elements in the given row of a matrix
int sumRow(int matrix[][3], int row, int cols) {
    int sum = 0;
    for (int j = 0; j < cols; j++) {
        sum += matrix[row][j];
    }
    return sum;
}

// Function to calculate the sum of elements in the given column of a matrix
int sumColumn(int matrix[][3], int col, int rows) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += matrix[i][col];
    }
    return sum;
}

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare and initialize the matrix
    int matrix[rows][cols];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of elements in a given row and column
    int row, col;
    printf("Enter the row number to calculate the sum: ");
    scanf("%d", &row);
    printf("Enter the column number to calculate the sum: ");
    scanf("%d", &col);

    if (row >= 0 && row < rows && col >= 0 && col < cols) {
        int rowSum = sumRow(matrix, row, cols);
        int colSum = sumColumn(matrix, col, rows);
        printf("Sum of elements in row %d: %d\n", row, rowSum);
        printf("Sum of elements in column %d: %d\n", col, colSum);
    } else {
        printf("Invalid row or column number!\n");
    }

    return 0;
}

