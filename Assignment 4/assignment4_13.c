#include <stdio.h>


int fibonacciNthTerm(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacciNthTerm(n - 1) + fibonacciNthTerm(n - 2);
}

void printFibonacciTerms(int num_terms) {
    printf("Fibonacci Series up to %d terms:\n", num_terms);
    for (int i = 0; i < num_terms; i++) {
        printf("%d ", fibonacciNthTerm(i));
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

    printFibonacciTerms(num_terms);

    return 0;
}

