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
	double sum = 0;

	for (int i = 0; i < numOfInts; i++)
	{
		sum = sum+numArr[i];
	}

	return sum / numOfInts;
}

double average(Dice myDice, int numOfRolls)
{
	int sumOfRolls = 0;

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

	int myArr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	cout<< average(myDice, 3)<<endl;

	cout<<"Array average: "<<average(myArr, 8)<<endl;
}
