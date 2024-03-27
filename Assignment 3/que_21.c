#include <stdio.h>


int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1; 
}

int main() {
    int givenNumber, count = 0;

    printf("Enter a number: ");
    scanf("%d", &givenNumber);

    printf("First 5 prime numbers after %d are:\n", givenNumber);

    
    for (int i = givenNumber + 1; ; i++) {
     
        if (isPrime(i)) {
            printf("%d\n", i);
            count++; 
        }

       
        if (count == 5) {
            break;
        }
    }

    return 0;
}

