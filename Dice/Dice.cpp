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

