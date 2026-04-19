#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int year);
int days_of_the_month(int month, int year);

int main(void)
{
    int year, month, day;
    long TotalDays;
    int y, m;
    int result;
    int max_day;

    TotalDays = 0;
    result = 0;
    max_day = 0;

    if(scanf("%d %d %d", &year, &month, &day) != 3)
    {
        return 1;
    }

    max_day = days_of_the_month(month, year);

    if(month < 1 || month > 12)
    {
        printf("month is error.\n");
        return 1;

    }

    if(day < 1 || day > max_day)
    {
        printf("day is error.\n");
        return 1;
        
    }

    for(y = 1900; y < year; y++)
    {
        TotalDays += isLeapYear(y) ? 366 : 365;
    }

    for(m = 1; m < month; m++)
    {
        TotalDays += days_of_the_month(m, year);
    }

    TotalDays += day;

    result = TotalDays % 7;

    printf("%d\n", result);

    return 0;
}

bool isLeapYear(int year)
{
    int t;

    t = (year % 4 == 0 && year % 100 != 0)
     || (year  % 400 == 0);

    return t;
}

int days_of_the_month(int month, int year)
{
    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        month = 31;
        break;

        case 4:
        case 6:
        case 9:
        case 11:
        month = 30;
        break;

        case 2:
        month = isLeapYear(year) ? 29 : 28;
        break;
    }

    return month;
}
