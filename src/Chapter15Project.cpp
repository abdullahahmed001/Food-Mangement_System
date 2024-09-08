//============================================================================
// Name        : Chapter15Project.cpp
// Author      : Abdullah Ahmed
// Version     :
// Copyright   : Don't steal my code!
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <climits>
#include "Date.hpp"
#include "Vegetable.hpp"
#include "Fruit.hpp"
#include "Food.hpp"
#include "Dairy.hpp"
using namespace std;
void clearCIN(void);

int main() {

	// declare all the necessary variables
	const int SIZE = 200;
	Food* myRefrigerator[SIZE];
	string fileName;
	int foodCounter = -1;
	string tempString;
	string foodType = "";
	string foodName = "";
	string inputRecord;
	Date expirationDate;
	Date purchaseDate;

	int dayExpired = 0;
	int monthExpired = 0;
	int yearExpired = 0;

	int dayPurchased = 0;
	int monthPurchased = 0;
	int yearPurchased = 0;

	// Variables for the vegetable object
	int totalFiber = 0;
	int totalSodium = 0;
	int totalVitB = 0;

	// variables for the fruit object
	long sugarAmount = 0;
	float totalC = 0;

	// varibales for the dairy object
	int fat = 0;
	double cholesterol = 0;
	double calories = 0;

	// Greet the user
	cout << "Welcome to my Food Mangement System" << endl;
	cout << "=====================================" << endl;


	ifstream inputFile(fileName); // create the file stream object
	cout << "Enter a file name: " << endl;
	cin >> fileName;
	clearCIN();
	inputFile.open(fileName); // open the file

	while(!inputFile) {
	inputFile.open(fileName);
	if(!inputFile.is_open())
	{
		cout << "Error opening file" << endl;
		cout << "Enter a file name" << endl;
		cin >> fileName;
	}
	else
	{
		cout << "File opened" << endl;
		cout << "Now reading file" << endl;
	}
	cout << "Enter a file name: " << endl;
	cin  >> fileName;
	clearCIN();

		while(!inputFile.eof())
		{
			getline(inputFile, inputRecord);
			stringstream StrStream(inputRecord);
			getline(StrStream, tempString, ',');

			switch(foodType)
			{
				case "00":
				{
					getline(StrStream, tempString, ',');
					purchaseDate.setMonth(monthPurchased);
					purchaseDate.setDay(dayPurchased);
					purchaseDate.setYear(yearPurchased);

					expirationDate.setMonth(monthExpired);
					expirationDate.setDay(dayExpired);
					expirationDate.setYear(yearExpired);
					foodCounter++;
					break;
				}
				case "01":
				{
					getline(StrStream, tempString, ',');
					purchaseDate.setMonth(monthPurchased);
					purchaseDate.setDay(dayPurchased);
					purchaseDate.setYear(yearPurchased);

					expirationDate.setMonth(monthExpired);
					expirationDate.setDay(dayExpired);
					expirationDate.setYear(yearExpired);

					Vegetable* aVegetable = new Vegetable();
					aVegetable->setName(foodName);
					//aVegetable->setDatePurchased(purchaseDate);
					//aVegetable->setExpireDate(expirationDate);
					aVegetable->setTotalFiber(totalFiber);
					aVegetable->setTotalSodium(totalSodium);
					aVegetable->setTotalVitB(totalVitB);

					for(int i = 0; i <=9; i++)
					{
						myRefrigerator[i] = aVegetable;
					}
					break;
				}
				case "02":
				{
					inputFile >> foodName >> monthPurchased >> dayPurchased >> yearPurchased >> monthExpired >> dayExpired >> yearExpired >> sugarAmount >> totalC;

					purchaseDate.setMonth(monthPurchased);
					purchaseDate.setDay(dayPurchased);
					purchaseDate.setYear(yearPurchased);

					expirationDate.setMonth(monthExpired);
					expirationDate.setDay(dayExpired);
					expirationDate.setYear(yearExpired);

					Fruit* aFruit = new Fruit();
					aFruit->setName(foodName);
					//aFruit->setDatePurchased(purchaseDate);
					//aFruit->setExpireDate(expirationDate);
					aFruit->setSugarAmount(sugarAmount);
					aFruit->setTotalC(totalC);

					for(int i = 0; i <= 9; i++)
					{
						myRefrigerator[i] = aFruit;
					}
					break;
				}
				case "03":
				{
					inputFile >> foodName >> monthPurchased >> dayPurchased >> yearPurchased >> monthExpired >> dayExpired >> yearExpired >> fat >> cholesterol >> calories;

					purchaseDate.setMonth(monthPurchased);
					purchaseDate.setDay(dayPurchased);
					purchaseDate.setYear(yearPurchased);

					expirationDate.setMonth(monthExpired);
					expirationDate.setDay(dayExpired);
					expirationDate.setYear(yearExpired);

					Dairy* aDairy = new Dairy();
					aDairy->setName(foodName);
					//aDairy->setDatePurchased(purchaseDate);
					//aDairy->setExpireDate(expirationDate);
					aDairy->setFat(fat);
					aDairy->setCholesterol(cholesterol);
					aDairy->setCalories(calories);

					for(int i = 0; i <= 10; i++)
					{
						myRefrigerator[i] = aDairy;
					}

					break;
				}
				default:
				cout << "Invalid food type in file" << endl;
			}



		}
	}

	cout << "Food Report" << endl;
	cout << "===========" << endl;
	for(int i = 0; i < SIZE; i++)
	{
		myRefrigerator[i]->print();
	}

	for(int i = 0; i < SIZE; i++)
	{
		delete myRefrigerator[i];
		myRefrigerator[i] = nullptr;
	}


}

	cout << "Program ending, have a nice day!" << endl; // prints Program ending, have a nice day!
	return 0;
}

void clearCIN(void)
{
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}
