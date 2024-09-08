/*
 * Food.cpp
 *
 *  Created on: Apr 17, 2023
 *      Author: abdullah ahmed
 */

#include "Food.hpp"
#include "Date.hpp"
#include <string>
#include <climits>
#include <iostream>
#include <iomanip>
using namespace std;

Food::Food() {
	// TODO Auto-generated constructor stub
	this->name = "";
	this->expireDate.setDay(0);
	this->expireDate.setMonth(0);
	this->expireDate.setYear(0);
	this->datePurchased.setDay(0);
	this->datePurchased.setMonth(0);
	this->datePurchased.setYear(0);

}

Food::~Food() {
	// TODO Auto-generated destructor stub
}
/*
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
*/




const Date& Food::getDatePurchased() const {
	return datePurchased;
}
/*
bool Food::setDatePurchased(const Date &datePurchased) {
	int day = datePurchased.getDay();
	int month = datePurchased.getMonth();
	int year = datePurchased.getYear();
	if (day < 1 || day > numDaysInMonth())
	{
		return false;
	}
	else if (month < 1 || month > 12)
	{
		return false;
	}
	else if (year < 1 || year > 9999)
	{
		return false;
	}
	else
	{
		this->datePurchased = datePurchased;
		return true;
	}

}
*/


const Date& Food::getExpireDate() const {
	return expireDate;
}
/*
bool Food::setExpireDate(const Date &expireDate) {
	int day = expireDate.getDay();
	int month = expireDate.getMonth();
	int year = expireDate.getYear();
	if (day < 1 || day > numDaysInMonth())
	{
		return false;
	}
	else if (month < 1 || month > 12)
	{
		return false;
	}
	else if (year < 1 || year > 9999)
	{
		return false;
	}
	else
	{
		this->expireDate = expireDate;
		return false;
	}

}
*/


const string& Food::getName() const {
	return name;
}

bool Food::setName(const string &name) {
	if (name == "")
	{
		return false;
	}
	else
	{
		this->name = name;
		return true;
	}

}

string Food::whoAmI(void)
{
	return "Food";
}


void Food::print(void)
{
	cout << "Food's name: " << this->getName() << setw(20) << "Date Purchased: " << this->datePurchased.getDate() << setw(20) << "Date Expired: " << this->expireDate.getDate() << endl;
}


