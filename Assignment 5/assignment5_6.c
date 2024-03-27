#include <stdio.h>

// Function to remove duplicate elements from the array
// and return the number of unique elements
int removeDuplicates(int arr[], int size) {
    if (size == 0 || size == 1)
        return size;

    int index = 0; // Index to store the next unique element

    // Traverse through the array
    for (int i = 0; i < size - 1; i++) {
        // If current element is not equal to the next element, 
        // store it at index position and move to next index
        if (arr[i] != arr[i + 1]) {
            arr[index++] = arr[i];
        }
    }

    // Store the last element (it will always be unique)
    arr[index++] = arr[size - 1];

    return index; // Return the number of unique elements
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

    // Removing duplicate elements
    int uniqueCount = removeDuplicates(arr, size);

    // Printing unique elements
    printf("Unique elements in the array:\n");
    printArray(arr, uniqueCount);

    printf("Number of unique elements: %d\n", uniqueCount);

    return 0;
}

