#include <stdio.h>


int main() {
    int day, month, year;
    int day_of_week;


    printf("Enter the date in format DD/MM/YYYY: ");
    scanf("%d/%d/%d", &day, &month, &year);


    if (month < 3)
	{
        month += 12;
        year--;
    }


    day_of_week = (day + (13 * (month + 1) / 5) + (year % 100) +
        ((year % 100) / 4) + ((year / 100) / 4) + 5 * (year / 100)) % 7;


    switch (day_of_week) {
        case 0:
            printf("The day is Saturday.\n");
            break;
        case 1:
            printf("The day is Sunday.\n");
            break;
        case 2:
            printf("The day is Monday.\n");
            break;
        case 3:
            printf("The day is Tuesday.\n");
            break;
        case 4:
            printf("The day is Wednesday.\n");
            break;
		case 5:
            printf("The day is Thursday.\n");
            break;
        case 6:
            printf("The day is Friday.\n");
            break;
    }


    return 0;
}
