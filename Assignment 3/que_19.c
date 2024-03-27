#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the range (two numbers separated by space): ");
    scanf("%d %d", &start, &end);

    
    for (int i = start; i <= end; i++) {
        printf("Multiplication table of %d:\n", i);
        
        
        for (int j = 1; j <= 4; j++) {
            for (int k = 0; k < 4; k++) {
                printf("%4d", i * (j + k));
            }
            printf("\n");
        }

        printf("\n"); 
    }

    return 0;
}

