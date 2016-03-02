#pragma once
class Dice
{
public:
	Dice();
	~Dice();
	int roll();
	double average(int[], int);
	double average(Dice, int);

};

