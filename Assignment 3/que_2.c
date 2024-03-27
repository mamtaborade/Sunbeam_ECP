#include <stdio.h>

int main()
{
    int number, multiplier = 1;

    printf("Enter a number to print its table: ");
    scanf("%d", &number);

    printf("Table of %d:\n", number);
    while (multiplier <= 10)
	{
        printf("%d x %d = %d\n", number, multiplier, number * multiplier);
        multiplier++;
    }

    return 0;
}
