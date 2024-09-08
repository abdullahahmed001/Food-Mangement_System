/*
 * Food.hpp
 *
 *  Created on: Apr 17, 2023
 *      Author: abdullah ahmed
 */

#ifndef FOOD_HPP_
#define FOOD_HPP_
#include <string>
#include "Date.hpp"
using namespace std;

class Food {
private:
	string name;
	Date datePurchased;
	Date expireDate;
public:
	Food();
	virtual ~Food();
	virtual void print(void) = 0;
	virtual string whoAmI(void) = 0;
	const Date& getDatePurchased() const;
	bool setDatePurchased(const Date &datePurchased);
	const Date& getExpireDate() const;
	bool setExpireDate(const Date &expireDate);
	const string& getName() const;
	bool setName(const string &name);
	int numDaysInMonth();
};

#endif /* FOOD_HPP_ */
