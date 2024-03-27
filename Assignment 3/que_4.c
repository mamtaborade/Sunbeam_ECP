#include <stdio.h>

int main() {
    int number;
    unsigned long long factorial = 1; 

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        int i = 1; 
        while (i <= number) {
            factorial *= i; 
            i++; 
        }
        printf("Factorial of %d = %llu\n", number, factorial);
    }

    return 0;
}

