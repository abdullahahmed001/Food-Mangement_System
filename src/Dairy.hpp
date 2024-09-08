/*
 * Dairy.hpp
 *
 *  Created on: Apr 18, 2023
 *      Author: abdullahahmed
 */

#ifndef SRC_DAIRY_HPP_
#define SRC_DAIRY_HPP_

#include "Food.hpp"

class Dairy: public Food {
public:
	Dairy();
	virtual ~Dairy();
	string whoAmI(void);
	void print(void);
	double getCalories() const;
	void setCalories(double calories);
	double getCholesterol() const;
	void setCholesterol(double cholesterol);
	int getFat() const;
	void setFat(int fat);
private:
	int fat;
	double cholesterol;
	double calories;
};

#endif /* SRC_DAIRY_HPP_ */
