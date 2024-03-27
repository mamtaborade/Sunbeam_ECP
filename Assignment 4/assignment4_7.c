#include <stdio.h>


void printFibonacci(int num_terms) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d terms:\n", num_terms);
    for (int i = 0; i < num_terms; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}

int main() {
    int num_terms;

    printf("Enter the number of terms of Fibonacci series to print: ");
    scanf("%d", &num_terms);

    if (num_terms <= 0) {
        printf("Number of terms should be a positive integer.\n");
        return 1; 
    }

    printFibonacci(num_terms);

    return 0;
}

