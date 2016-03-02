#include "Dice.h"
#include <cmath>
#include <cstdlib>

Dice::Dice()
{
}


Dice::~Dice()
{
}

int Dice::roll()
{
	return rand() % 6 + 1;

}

double Dice::average(int numArr[], int numOfInts)
{
	int sum = 0;

	for (int i = 0; i < numOfInts; i++)
	{
		sum = +numArr[i];
	}

	return sum / numOfInts;
}

double Dice::average(Dice myDice, int numOfRolls)
{
	int sumOfRolls = 0;

	for (int i = 0; i < numOfRolls; i++)
	{
		sumOfRolls = myDice.roll();
	}

	return sumOfRolls / numOfRolls;
}
