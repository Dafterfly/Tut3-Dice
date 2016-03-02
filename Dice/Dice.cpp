#include "Dice.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

Dice::Dice()
{
}


Dice::~Dice()
{
}

int Dice::roll()
{
	srand(time(NULL));
	return rand() % 6 + 1;
}

double average(int numArr[], int numOfInts)
{
	int sum = 0;

	for (int i = 0; i < numOfInts; i++)
	{
		sum = +numArr[i];
	}

	return sum / numOfInts;
}

double average(Dice myDice, int numOfRolls)
{
	int sumOfRolls = 0;

	for (int i = 0; i < numOfRolls; i++)
	{
		sumOfRolls = myDice.roll();
	}

	return sumOfRolls / numOfRolls;
}

int main()
{
	Dice myDice;

	cout << "Dice roll test: " << myDice.roll()<<endl;

}
