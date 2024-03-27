#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Unique pairs of numbers whose multiplication equals %d:\n", number);

    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) {
            int pair = number / i;
            if (i <= pair) {
                printf("%d x %d\n", i, pair);
            }
        }
    }

    return 0;
}

