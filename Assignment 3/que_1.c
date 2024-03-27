#include <stdio.h>

int main()
{
    char character;
    int number, count = 0;

    printf("Enter a character: \n");
    scanf("%c", &character);

    printf("Enter a number: \n");
    scanf("%d", &number);

    while (count < number)
	{
        printf("%c", character);
        count++;
    }
	return 0;
}
