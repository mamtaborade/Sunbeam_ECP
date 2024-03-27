#include <stdio.h>

// Function to reverse the array elements
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    // Swap elements from start and end
    while (start < end) {
        // Swap arr[start] and arr[end]
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move start to next position
        start++;

        // Move end to previous position
        end--;
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

// Function to print array elements
void printArray(int arr[], int size) {
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Accepting array elements
    acceptArray(arr, size);

    // Printing original array elements
    printf("Original ");
    printArray(arr, size);

    // Reversing array elements
    reverseArray(arr, size);

    // Printing reversed array elements
    printf("Reversed ");
    printArray(arr, size);

    return 0;
}

