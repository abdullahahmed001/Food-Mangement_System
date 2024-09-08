/*
 * Date.hpp
 *
 *  Created on: Mar 24, 2023
 *      Author: abdullahahmed
 */

#ifndef DATE_HPP_
#define DATE_HPP_
#include <string>
using namespace std;

class Date {
public:
	Date();
	virtual ~Date();
	int numDaysInMonth();
	int getDay() const;
	bool setDay(int day);
	int getMonth() const;
	bool setMonth(int month);
	int getYear() const;
	bool setYear(int year);
	string getDate() const;

private:
	int day;
	int month;
	int year;
};

#endif /* DATE_HPP_ */
