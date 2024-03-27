#include <stdio.h>

// Function to print a given number in words
void numberToWords(int num) {
    // Arrays for single-digit and two-digit numbers in words
    char *ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    // Special words for two-digit numbers below 20
    char *teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen",
                     "Seventeen", "Eighteen", "Nineteen"};

    // Function to print a two-digit number
    void printTwoDigit(int n) {
        if (n < 10) {
            printf("%s", ones[n]);
        } else if (n < 20) {
            printf("%s", teens[n - 10]);
        } else {
            printf("%s%s", tens[n / 10], ones[n % 10]);
        }
    }

    // Function to print a three-digit number
    void printThreeDigit(int n) {
        if (n >= 100) {
            printf("%s Hundred ", ones[n / 100]);
            n %= 100;
            if (n != 0) printf("and ");
        }
        printTwoDigit(n);
    }

    if (num == 0) {
        printf("Zero");
    } else {
        if (num < 0) {
            printf("Minus ");
            num = -num;
        }
        if (num < 1000) {
            printThreeDigit(num);
        } else {
            printf("Number is too large to convert.");
        }
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("In words: ");
    numberToWords(number);
    printf("\n");

    return 0;
}

