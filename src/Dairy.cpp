/*
 * Dairy.cpp
 *
 *  Created on: Apr 18, 2023
 *      Author: abdullahahmed
 */

#include "Dairy.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

Dairy::Dairy():Food() {
	// TODO Auto-generated constructor stub
	this->fat = 0;
	this->cholesterol = 0;
	this->calories = 0;

}

Dairy::~Dairy() {
	// TODO Auto-generated destructor stub
}

double Dairy::getCalories() const {
	return calories;
}

void Dairy::setCalories(double calories) {
	this->calories = calories;
}

double Dairy::getCholesterol() const {
	return cholesterol;
}

void Dairy::setCholesterol(double cholesterol) {
	this->cholesterol = cholesterol;
}

int Dairy::getFat() const {
	return fat;
}

void Dairy::setFat(int fat) {
	this->fat = fat;
}

string Dairy::whoAmI(void)
{
	return "Dairy";
}

void Dairy::print(void)
{
	cout << "Type of food: " << whoAmI() << setw(20) << "Name: " << this->getName() << setw(20) << "Fat: " << this->fat << setw(20) << "Date Purchased: " << this->getDatePurchased().getDate() << setw(20)
	<< "Date Expired: " << this->getExpireDate().getDate() << setw(20) << "Cholesterol: " << this->cholesterol << endl;
}
