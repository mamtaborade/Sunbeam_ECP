#include <stdio.h>


void printCharacter(char ch, int num_times) {
    int i;
    for (i = 0; i < num_times; i++) {
        printf("%c", ch);
    }
    printf("\n");
}

int main() {
    char character;
    int num_times;

    printf("Enter the character to print: ");
    scanf(" %c", &character);

    printf("Enter the number of times to print the character: ");
    scanf("%d", &num_times);

    printCharacter(character, num_times);

    return 0;
}

