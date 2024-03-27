#include <stdio.h>

int main() {
    int base, index;
    long long result = 1; 

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter index (exponent): ");
    scanf("%d", &index);

    for (int i = 1; i <= index; ++i) {
        result *= base; 
      }

    printf("%d raised to the power of %d is %lld\n", base, index, result);

    return 0;
}

