#include <stdio.h>


void printHexadecimal(int num) {
    printf("Hexadecimal representation of %d is: 0x%X\n", num, num);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printHexadecimal(number);

    return 0;
}

