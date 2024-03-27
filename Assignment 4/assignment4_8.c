#include <stdio.h>


int nextFibonacci() {
    static int first = 0, second = 1, next;

    if (first == 0 && second == 1) {
        next = second;
    } else {
        next = first + second;
        first = second;
        second = next;
    }

    return next;
}

int main() {
    int num_terms;

    printf("Enter the number of terms of Fibonacci series to generate: ");
    scanf("%d", &num_terms);

    if (num_terms <= 0) {
        printf("Number of terms should be a positive integer.\n");
        return 1;
    }

    printf("Fibonacci Series:\n");
    for (int i = 0; i < num_terms; i++) {
        printf("%d ", nextFibonacci());
    }
    printf("\n");

    return 0;
}

