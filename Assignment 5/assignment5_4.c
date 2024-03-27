#include <stdio.h>

// Function to calculate maximum of the array elements
int calculateMax(int arr[], int size) {
    int max = arr[0]; // Assume the first element as maximum

    // Traverse through the array to find the maximum element
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
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

    // Calculating maximum of the array elements
    int max = calculateMax(arr, size);

    // Printing the maximum element
    printf("Maximum element in the array: %d\n", max);

    return 0;
}

