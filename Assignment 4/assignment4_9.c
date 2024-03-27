#include <stdio.h>
#include <stdbool.h>


bool isPrime(int number) {
    if (number <= 1)
        return false;

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0)
            return false;
    }
    return true;
}

void printPrimesInRange(int start, int end) {
    printf("Prime numbers in the range [%d, %d]: ", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int num;
    
    printf("Enter a number to check if it's prime: ");
    scanf("%d", &num);
    
    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    int start, end;
    
    printf("Enter the range to find prime numbers (start end): ");
    scanf("%d %d", &start, &end);
    
    if (start > end) {
        printf("Invalid range! The start should be less than or equal to the end.\n");
        return 1;
    }
    
    printPrimesInRange(start, end);

    return 0;
}

