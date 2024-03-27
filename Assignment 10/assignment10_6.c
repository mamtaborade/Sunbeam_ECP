#include <stdio.h>

// Function to swap two numbers using XOR operation
void swapNumbers(int *a, int *b) {
    if (a != b) { // Check if the two pointers are pointing to the same location
        // Perform XOR swap
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swapNumbers function to swap num1 and num2
    swapNumbers(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

