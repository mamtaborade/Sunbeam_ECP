#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int magicNumber, guess, attempts = 0;
    const int MAX_ATTEMPTS = 10;

    
    srand(time(NULL));

   
    magicNumber = rand() % 1000 + 1;

    printf("Guess the Magic Number between 1 and 1000\n");

    do {
        printf("Enter your guess (%d attempts left): ", MAX_ATTEMPTS - attempts);
        scanf("%d", &guess);
        attempts++;

        if (guess < 1 || guess > 1000) {
            printf("Please guess a number between 1 and 1000.\n");
            continue;
        }

        if (guess == magicNumber) {
            printf("Congrats! You won.\n");
            break;
        } else if (guess < magicNumber) {
            printf("** Left **\n");
        } else {
            printf("** Right **\n");
        }

        if (attempts == MAX_ATTEMPTS) {
            printf("Sorry, you've reached the maximum number of attempts. The magic number was %d.\n", magicNumber);
            break;
        }
    } while (guess != magicNumber);

    return 0;
}

