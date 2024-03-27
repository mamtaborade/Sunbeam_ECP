#include <stdio.h>


void printBinary(int num) {

    int num_bits = sizeof(num) * 8;

    for (int i = num_bits - 1; i >= 0; i--) {
   
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Binary representation of %d is: ", number);
    printBinary(number);

    return 0;
}

