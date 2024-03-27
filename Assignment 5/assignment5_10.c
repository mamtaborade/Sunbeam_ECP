#include <stdio.h>

// Function to perform linear search
int* linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return &arr[i]; // Return address of the element if found
        }
    }
    return NULL; // Return NULL if key is not found
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
    int size, key;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Accepting array elements
    acceptArray(arr, size);

    printf("Enter the number to search: ");
    scanf("%d", &key);

    // Performing linear search
    int* address = linearSearch(arr, size, key);

    // Displaying result
    if (address != NULL) {
        printf("Element %d found at address %p.\n", key, (void*)address);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}

