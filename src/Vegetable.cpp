/*
 * Vegetable.cpp
 *
 *  Created on: Apr 18, 2023
 *      Author: abdullahahmed
 */

#include "Vegetable.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

Vegetable::Vegetable(): Food() {
	// TODO Auto-generated constructor stub
	this->totalFiber = 0;
	this->totalSodium = 0;
	this->totalVitB = 0;
}

Vegetable::~Vegetable() {
	// TODO Auto-generated destructor stub
}

int Vegetable::getTotalFiber() const {
	return totalFiber;
}

void Vegetable::setTotalFiber(int totalFiber) {
	this->totalFiber = totalFiber;
}

int Vegetable::getTotalSodium() const {
	return totalSodium;
}

void Vegetable::setTotalSodium(int totalSodium) {
	this->totalSodium = totalSodium;
}

int Vegetable::getTotalVitB() const {
	return totalVitB;
}

void Vegetable::setTotalVitB(int totalVitB) {
	this->totalVitB = totalVitB;
}

string Vegetable::whoAmI(void)
{
	return "Vegetable";
}

void Vegetable::print(void)
{
	cout << "Value of whoAmI is : " << whoAmI() << setw(20) << "Name: " << this->getName() << setw(20) << "Total Sodium: " << this->totalSodium << endl;
}
