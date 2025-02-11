#include <stdio.h>
#include <stdbool.h>

struct Date {
    int day;
    int month;
    int year;
};

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(struct Date date) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (date.year <= 0)
        return false;

    if (date.month < 1 || date.month > 12)
        return false;

    if (date.month == 2 && isLeapYear(date.year)) {
        if (date.day < 1 || date.day > 29)
            return false;
    }
    else {
        if (date.day < 1 || date.day > daysInMonth[date.month - 1])
            return false;
    }

    return true;
}

int main() {
    struct Date date;

    printf("Enter date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &date.day, &date.month, &date.year);

    if (isValidDate(date)) {
        printf("Valid date!\n");
    } else {
        printf("Invalid date!\n");
    }

    return 0;
}
