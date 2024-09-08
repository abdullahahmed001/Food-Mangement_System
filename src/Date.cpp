/*
 * Date.cpp
 *
 *  Created on: Mar 24, 2023
 *      Author: abdullahahmed
 */

#include "Date.hpp"
#include <iomanip>
#include <climits>

Date::Date() {
	// TODO Auto-generated constructor stub
	this->day = 0;
	this->month = 0;
	this->year = 0;

}

Date::~Date() {
	// TODO Auto-generated destructor stub
}
// Function to check for the number of days for a specific month
int Date::numDaysInMonth()
{
	if (this->month == 2)
	{
		return 28;
	}
	else if (this->month == 4 || this->month == 6 || this->month == 9 || this->month == 11)
	{
		return 30;
	}
	else if(this->month == 1 || this->month == 3 || this->month == 5 || this->month == 7 || this->month == 8 || this->month == 10 || this->month == 12)
	{
		return 31;
	}
	else
	{
		return 0;
	}
}


int Date::getDay() const {
	return day;
}

bool Date::setDay(int day) {
	if (this->year == 0 || this->month == 0)
	{
		return false;
	}
	if (this->month == 0)
	{
		this->day = 0;
		return true;
	}
	else if (day < 1 || day > numDaysInMonth())
	{
		return false;
	}
	else
	{
		this->day = day;
		return true;
	}

}

int Date::getMonth() const {
	return month;
}

bool Date::setMonth(int month) {
	if (this->year == 0)
	{
		return false;
	}
	else if (month < 1 || month > 12)
	{
		return false;
	}
	else
	{
		this->month = month;
		return true;
	}

}

int Date::getYear() const {
	return year;
}

bool Date::setYear(int year) {
	if (year < 1 || year > 9999)
	{
		return false;
	}
	else
	{
		this->year = year;
		return true;
	}
}
string Date::getDate() const
{
	string aYear = to_string(year);
	string aMonth = to_string(month);
	string aDay = to_string(day);

	return aYear + "/" + aMonth + "/" + aDay;
}
