#include <stdio.h>
#include <stdlib.h>

// Function to display a number in binary format using bitwise operators
void displayBinary(int num) {
    // Start from the leftmost bit (most significant bit)
    int bitPosition = sizeof(int) * 8 - 1; // Total bits in an integer

    // Iterate over each bit
    while (bitPosition >= 0) {
        // Extract the bit at the current position using bitwise AND with a mask
        int bit = (num >> bitPosition) & 1;

        // Print the bit
        printf("%d", bit);

        // Decrement the bit position to move to the next bit
        bitPosition--;

        // Insert space to separate groups of 4 bits
        if (bitPosition % 4 == 3)
            printf(" ");
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    int number = atoi(argv[1]);

    printf("Binary representation of %d: ", number);
    displayBinary(number);

    return 0;
}

