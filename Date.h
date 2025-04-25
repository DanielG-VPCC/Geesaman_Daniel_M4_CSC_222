#pragma once
class Date
{
private:
	int day;
	int month;
	int year;
	int daysTotal;
public:
	Date();
	Date(int m, int d, int y);
	void dayDiffPrint();
	int checkDateChange(int d);

	Date operator-(const Date& second)
	{
		int daysOfYear = 0;
		int daysOfYear2 = 0;
		int olderDay;
		int newerDay;
		int olderMonth;
		int newerMonth;
		int olderYear;
		int newerYear;
		daysTotal = 0;
		
		if (year < second.year)
		{
			olderDay = day;
			olderMonth = month;
			olderYear = year;
			newerDay = second.day;
			newerMonth = second.month;
			newerYear = second.year;
		}
		else
		{
			olderDay = second.day;
			olderMonth = second.month;
			olderYear = second.year;
			newerDay = day;
			newerMonth = month;
			newerYear = year;
		}

		for (int i = 1; i <= olderMonth; i++)
		{
			daysOfYear = daysOfYear + lastDay(i, olderYear);
		}
		daysOfYear = daysOfYear + olderDay;

		for (int i = 1; i <= newerMonth; i++)
		{
			daysOfYear2 = daysOfYear2 + lastDay(i, newerYear);
		}
		daysOfYear2 = daysOfYear2 + newerDay;

		if (year < second.year)
		{
			for (int i = year + 1; i < second.year - 1; i++)
			{
				if (isLeapYear(i) == true)
				{
					daysOfYear = daysOfYear + 366;
				}
				else
				{
					daysOfYear = daysOfYear + 365;
				}
			}
			daysTotal = daysOfYear2 - daysOfYear;
		}
		else if (second.year < year)
		{
			for (int i = second.year; i <= year - 1; i++)
			{
				if (isLeapYear(i) == true)
				{
					daysOfYear2 = daysOfYear2 + 366;
				}
				else
				{
					daysOfYear2 = daysOfYear2 + 365;
				}
			}
			daysTotal = (daysOfYear2 - daysOfYear) + 2;
		}
		else
		{
			daysTotal = (daysOfYear - daysOfYear2) + 2;
		}
		dayDiffPrint();
		
		return Date(month - second.month, day - second.day, year - second.year);
	}
	
	Date operator++()
	{
		++day;
		checkDateChange(day);
		return *this;
	}
	
	Date operator++(int)
	{
		Date temp = *this;
		day++;
		checkDateChange(day);
		return temp;
	}

	Date operator--()
	{
		--day;
		checkDateChange(day);
		return *this;
	}

	Date operator--(int)
	{
		Date temp = *this; 
		day--;
		checkDateChange(day);
		return temp;
	}

	friend ostream& operator<<(ostream& out, const Date& p)
	{
		out << "Month: " << p.month << ", Day: " << p.day << ", Year:" << p.year;
		return out;
	}

	friend istream& operator>>(istream& in, Date& p) 
	{
		cout << "Enter Month: ";
		in >> ws;
		in >> p.month;
		cout << "Enter Day: ";
		in >> p.day;
		cout << "Enter Year: ";
		in >> p.year;
		return in;
	}

	int getDay();
	int getMonth();
	int getYear();
	bool isLeapYear();
	bool isLeapYear(int y);
	int lastDay();
	int lastDay(int m, int y);
	void setDate(int m, int d, int y);
	void printDate(int format);
};