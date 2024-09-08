/*
 * Fruit.cpp
 *
 *  Created on: Apr 18, 2023
 *      Author: abdullahahmed
 */

#include "Fruit.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

Fruit::Fruit():Food() {
	// TODO Auto-generated constructor stub
	this->sugarAmount = 0;
	this->totalC = 0.0;

}

Fruit::~Fruit() {
	// TODO Auto-generated destructor stub
}

long Fruit::getSugarAmount() const {
	return sugarAmount;
}

void Fruit::setSugarAmount(long sugarAmount) {
	this->sugarAmount = sugarAmount;
}

float Fruit::getTotalC() const {
	return totalC;
}

void Fruit::setTotalC(float totalC) {
	this->totalC = totalC;
}

string Fruit::whoAmI(void)
{
	return "Fruit";
}

void Fruit::print(void)
{
	cout << "Type of food: " << whoAmI() << setw(20) << " Name: " << this->getName() << setw(20) << "Sugar Amount: " << this->sugarAmount << endl;
}
