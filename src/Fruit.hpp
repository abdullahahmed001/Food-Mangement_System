/*
 * Fruit.hpp
 *
 *  Created on: Apr 18, 2023
 *      Author: abdullahahmed
 */

#ifndef SRC_FRUIT_HPP_
#define SRC_FRUIT_HPP_

#include "Food.hpp"

class Fruit: public Food {
public:
	Fruit();
	virtual ~Fruit();
	string whoAmI(void);
	void print(void);
	long getSugarAmount() const;
	void setSugarAmount(long sugarAmount);
	float getTotalC() const;
	void setTotalC(float totalC);
private:
	long sugarAmount;
	float totalC;
};

#endif /* SRC_FRUIT_HPP_ */
