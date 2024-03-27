#include <stdio.h>

// Function to check and correct even parity of a given byte
unsigned char checkAndCorrectEvenParity(unsigned char byte) {
    int count = 0;

    // Count the number of '1' bits in the given byte
    for (int i = 0; i < 8; i++) {
        if (byte & (1 << i))
            count++;
    }

    // If the count is odd, set the most significant bit (MSB) to make it even parity
    if (count % 2 != 0)
        byte |= (1 << 7);

    return byte;
}

int main() {
    unsigned char byte;
    printf("Enter a byte in hexadecimal format (e.g., 0x12): ");
    scanf("%hhx", &byte);

    printf("Original byte in binary: ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (byte >> i) & 1);
    }
    printf("\n");

    // Check and correct even parity
    unsigned char correctedByte = checkAndCorrectEvenParity(byte);

    printf("Byte after correcting even parity in binary: ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (correctedByte >> i) & 1);
    }
    printf("\n");

    printf("Byte after correcting even parity in hexadecimal: 0x%x\n", correctedByte);

    return 0;
}

