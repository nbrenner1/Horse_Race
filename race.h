// Header file for Race class

#ifndef RACE_H_
#define RACE_H_
#include "horse.h"

class Race
{
	private:
	int trackLength;
	int number;

	public:
	Race();
	int get_track();     // Function to get user's desired track length
	void start(int numberHorses, int *arrayHorses, int track);    // Function to run the race and show results of each round
};

#endif
