#include <stdio.h>

int main() {
    int n, first = 0, second = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:");

    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            printf(" %d,", first);
            continue;
        }
        if(i == 2) {
            printf(" %d,", second);
            continue;
        }
        nextTerm = first + second;
        first = second;
        second = nextTerm;
        printf(" %d,", nextTerm);
    }

    printf("\b \n"); 

    return 0;
}

