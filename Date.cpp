#include "Date.h"
#include <iostream>
#include <string>
using namespace std;

Date::Date()
{
	//constructor
	day = 1;
	month = 1;
	year = 1900;
}

Date::Date(int m, int d, int y)
{
	setDate(m, d, y);
}

void Date::setDate(int m, int d, int y)
{
	if (y <= 0)
	{
		setDate(1, 1, 1900);
		return;
	}
	else if (m < 1 || m > 12)
	{
		setDate(1, 1, 1900);
		return;
	}
	else if (d < 1 || d > lastDay(m, y))
	{
		setDate(1, 1, 1900);
		return;
	}
	//include validation
	day = d;
	month = m;
	year = y;
}


int Date::getDay()
{
	return day;
}

int Date::getMonth()
{
	return month;
}

int Date::getYear()
{
	return year;
}

bool Date::isLeapYear()
{
	if ((year / 4.0 - year / 4) > 0)
	{
		//cout << "not leap year";
		return 0;
	}
	else if (!((year / 100.0 - year / 100) > 0))
	{
		//cout << "not leap year";
		return 0;
	}
	else
	{
		return 1;
	}
}

bool Date::isLeapYear(int y)
{
	if ((y / 4.0 - y / 4) > 0)
	{
		//cout << "not leap year";
		return 0;
	}
	else if (!((y / 100.0 - y / 100) > 0))
	{
		//cout << "not leap year";
		return 0;
	}
	else
	{
		return 1;
	}
}

int Date::lastDay()
{
	int lastDate;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		return 31;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		return 30;
	}
	else if (month == 2 && isLeapYear() == true)
	{
		return 29;
	}
	else if (month == 2 && isLeapYear() == false)
	{
		return 28;
	}
	else
	{
		cout << "error in lastDay check";
	}
}

int Date::lastDay(int m, int y)
{
	int lastDate;
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
	{
		return 31;
	}
	else if (m == 4 || m == 6 || m == 9 || m == 11)
	{
		return 30;
	}
	else if (m == 2 && isLeapYear(y) == true)
	{
		return 29;
	}
	else if (m == 2 && isLeapYear(y) == false)
	{
		return 28;
	}
	else
	{
		cout << "error in lastDay check";
	}
}

void Date::printDate(int format)
{
	string monthByName;
	/*
	format 1: MM/DD/YYYY
	format 2: Month DD, YYYY
	format 3: DD Month YYYY
	*/

	switch (month)
	{
	case 1:
		monthByName = "January";
		break;
	case 2:
		monthByName = "Febuary";
		break;
	case 3:
		monthByName = "March";
		break;
	case 4:
		monthByName = "April";
		break;
	case 5:
		monthByName = "May";
		break;
	case 6:
		monthByName = "June";
		break;
	case 7:
		monthByName = "July";
		break;
	case 8:
		monthByName = "August";
		break;
	case 9:
		monthByName = "September";
		break;
	case 10:
		monthByName = "October";
		break;
	case 11:
		monthByName = "November";
		break;
	case 12:
		monthByName = "December";
		break;
	}

	if (format == 1)
	{
		cout << month << "/" << day << "/" << year;
	}
	else if (format == 2)
	{
		cout << monthByName << " " << day << ", " << year;
	}
	else if (format == 3)
	{
		cout << day << " " << monthByName << " " << year;
	}
	else
	{
		cout << "invalid selection";
	}
}

void Date::dayDiffPrint()
{
	cout << abs(daysTotal);
}

int Date::checkDateChange(int d)
{
	if (d == 1 + lastDay(month, year))
	{
		day = 1;
		month = month + 1;
		if (month + 1 > 12)
		{
			year = year + 1;
			month = 1;
		}
		else
		{
			year;
		}
		return (month, day, year);
	}
	else if (d == 0)
	{
		month = month - 1;
		if (month == 0)
		{
			year = year - 1;
			month = 12;
		}
		else
		{
			month;
			year;
		}
		day = lastDay(month, year);
		return (month, day, year);
	}
	else
	{
		return (month, day, year);
	}
}