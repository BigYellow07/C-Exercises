#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int year);
int days_of_the_month(int month, int year);

int main(void)
{
    int year, month;
    int result;
    
    if(scanf("%d %d", &year, &month) != 2)
    {
    	return 1;
	}
    
    result = days_of_the_month(month, year);
    
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
