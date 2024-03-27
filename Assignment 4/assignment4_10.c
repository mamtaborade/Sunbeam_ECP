#include <stdio.h>
#include <stdbool.h>


bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
    else
        return false;
}


int daysInMonth(int month, int year) {
    switch (month) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            return 31;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            return 30;
        case 2: // February
            if (isLeapYear(year))
                return 29;
            else
                return 28;
        default:
            return -1; 
    }
}

int main() {
    int year, month;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (isLeapYear(year))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);

    printf("Enter a month (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Invalid month!\n");
        return 1; 
    }

    printf("Number of days in the given month: %d\n", daysInMonth(month, year));

    return 0;
}

