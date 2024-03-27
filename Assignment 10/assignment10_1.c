#include <stdio.h>

// Function to count the number of '1' bits in a given number using bitwise operators
int countSetBits(int num) {
    int count = 0;
    while (num) {
        // Increment count if the least significant bit is 1
        count += num & 1;
        // Right shift the number by 1 bit
        num >>= 1;
    }
    return count;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int numberOfOnes = countSetBits(number);
    printf("Number of '1' bits in %d is %d\n", number, numberOfOnes);

    return 0;
}

