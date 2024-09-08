/*
 * Vegetable.hpp
 *
 *  Created on: Apr 18, 2023
 *      Author: abdullahahmed
 */

#ifndef SRC_VEGETABLE_HPP_
#define SRC_VEGETABLE_HPP_

#include "Food.hpp"

class Vegetable: public Food {
public:
	Vegetable();
	virtual ~Vegetable();
	string whoAmI(void);
	void print(void);
	int getTotalFiber() const;
	void setTotalFiber(int totalFiber);
	int getTotalSodium() const;
	void setTotalSodium(int totalSodium);
	int getTotalVitB() const;
	void setTotalVitB(int totalVitB);
private:
	int totalFiber;
	int totalSodium;
	int totalVitB;
};

#endif /* SRC_VEGETABLE_HPP_ */
