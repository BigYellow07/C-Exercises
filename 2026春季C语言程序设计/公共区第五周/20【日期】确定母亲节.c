#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int year);
int days_of_the_month(int month, int year);
int mother_s_day(int a);

int main(void)
{
    int year, month, day;
    long TotalDays;
    int y, m;
    int result;

    TotalDays = 0;
    result = 0;
    month = 5;
    day = 1;

    if(scanf("%d", &year) != 1)
    {
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

    printf("%d\n", mother_s_day(result));

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

int mother_s_day(int a)
{
	int mother = 0;
	
	switch(a)
	{
		case 0:
			mother = 8;
			break;
		
		case 1:
			mother = 14;
			break;
			
		case 2:
			mother = 13;
			break;
			
		case 3:
			mother = 12;
			break;
			
		case 4:
			mother = 11;
			break;
			
		case 5:
			mother = 10;
			break;
			
		case 6:
			mother = 9;
			break;
	}
	
	return mother;
}
