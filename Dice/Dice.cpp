/* 
	Eustacia Rajman 
 	214514354 
 	ENEL3CC - Computer Methods 3 
 	Tut3-Dice
 */ 


#include "Dice.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

// constructor
Dice::Dice()
{
}

// Destructor
Dice::~Dice()
{
}

// generates a random no between 1 and 6
int Dice::roll()
{
	return rand() % 6 + 1;
}

// finds the average of an integer array given the number of integers in that array
double average(int numArr[], int numOfInts)
{
	// Finds the sum of all numbers n array
	double sum = 0;
	for (int i = 0; i < numOfInts; i++)
	{
		sum = sum+numArr[i];
	}

	return sum / numOfInts;
}

// Rolls a dice a given number of times and finds the average of those rolls
double average(Dice myDice, int numOfRolls)
{
	double sumOfRolls = 0;

	cout << "Dice rolls: " << endl;

	for (int i = 1; i <= numOfRolls; i++)
	{
		int rolled = myDice.roll();
		cout << rolled<<endl;
		sumOfRolls += rolled;
	}

	return sumOfRolls / numOfRolls;
}

int main()
{
	Dice myDice;

	// seed all calls rand() from now on to ensure a different number is generated every time it's run 
	srand(time(NULL));
	
	cout<<"Average of dice rolls: "<< average(myDice, 3)<<endl;

	int myArr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	cout<<"Array average: "<<average(myArr, 8)<<endl;
}
