// Header file for Horse class

#ifndef HORSE_H_
#define HORSE_H_
#include "race.h"

class Horse
{
	private:
	int position;
	int numberOfHorses;

	public:
	Horse();
	int get_num();       // Function to get user's desired number of horses
	bool checkMovement(int horseNumber);     // Function to determine if a horse advances or not
};

#endif
