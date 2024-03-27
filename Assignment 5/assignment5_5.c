#include <stdio.h>

// Function to calculate maximum and minimum of the array elements
void calculateMinMax(int arr[], int size, int *max, int *min) {
    *max = arr[0]; // Assume the first element as maximum
    *min = arr[0]; // Assume the first element as minimum

    // Traverse through the array to find the maximum and minimum elements
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

// Function to accept array elements from the user
void acceptArray(int arr[], int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Accepting array elements
    acceptArray(arr, size);

    int max, min;
    
    // Calculating maximum and minimum of the array elements
    calculateMinMax(arr, size, &max, &min);

    // Printing the maximum and minimum elements
    printf("Maximum element in the array: %d\n", max);
    printf("Minimum element in the array: %d\n", min);

    return 0;
}

