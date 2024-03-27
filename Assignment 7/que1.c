#include <stdio.h>

// Function to accept a 2D array from the user
void acceptArray(int rows, int cols, int arr[rows][cols]) {
    printf("Enter elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

// Function to print a 2D array
void printArray(int rows, int cols, int arr[rows][cols]) {
    printf("2D Array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare a 2D array
    int arr[rows][cols];

    // Accept elements into the array
    acceptArray(rows, cols, arr);

    // Print the array
    printArray(rows, cols, arr);

    return 0;
}

