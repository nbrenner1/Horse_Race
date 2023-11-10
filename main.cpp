#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include "horse.h"
#include "race.h"

using namespace std;

int main()
{
	int numberOfHorses;
	int trackLength;

	Horse a;
	numberOfHorses = a.get_num();      // Call function to get user's desired number of horses

	Race b;
	trackLength = b.get_track();       // Call function to get user's desired track length

	int *arrayHorses{nullptr};
	arrayHorses = new int[numberOfHorses];   // Initialize and declare a dynamic array to hold our horses

	b.start(numberOfHorses, arrayHorses, trackLength);     // Call the start of race function

	delete [] arrayHorses;  	// Delete our dynamic array to avoid memory leak
	
	return 0;
}
