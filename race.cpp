#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include "race.h"
#include "horse.h"

using namespace std;

Race::Race()
{
    Race::number=1;
}

int Race::get_track()    // Function to get user's desired track length
{
	int trackLength;

	cout << "Enter the track's length:" << endl;
	cin >> trackLength;
	cout << endl;

	while (trackLength < 2)     // If an invalid track length is entered (<2), continue to prompt the user for a track length
	{
		cout << "The track's length cannot be less than 2, try again!" << endl << endl;
		cout << "Enter the track's length:" << endl;
		cin >> trackLength;
		cout << endl;
	}

	return trackLength;
}

void Race::start(int numberOfHorses, int arrayHorses[], int trackLength)
{
	srand(time(NULL));
	int maxHorsePosition = 1;
	int leadingHorse;
	Horse a;

	for (int k=0; k<numberOfHorses; k++)      // Initialize the array containing a bucket for each horse to 1
	{										  // The value of each bucket is the position of the corresponding horse on the track
		arrayHorses[k] = 1;					  // Thus, this is initialized to 1 because all horses should start at the beginning of the track
	}

	cout << "Race begins ---" << endl << endl;
	
	while (maxHorsePosition<=trackLength)     // WHILE loop keeps the race going until a horse exceeds the track
	{
		for (int i=1; i<=numberOfHorses; i++)     // FOR loop to cycle through each horse to check whether or not it moves
		{										  // and to display its progress on the track each round
			if(a.checkMovement(i))
			{
				arrayHorses[i-1]++;     // If the checkMovement function returns a true value for that horse, advance that horse one position
			}
			for (int k=1; k<arrayHorses[i-1];k++)
			{
				cout << ".";   			// Display the track behind the horse
			}

			if (arrayHorses[i-1]<=trackLength)
			{
				cout << i;              // Display a number to represent the horse on the track
			}

			for (int k=arrayHorses[i-1]; k<trackLength; k++)
			{
				cout << ".";            // Display the track in front of the horse
			}

			cout << endl;
		}

		for (int j=0; j < numberOfHorses; j++)       // FOR loop to cycle through the horses to determine the maximum
		{											 // position and which horse is in that position
			if (arrayHorses[j]>maxHorsePosition)
			{
				maxHorsePosition = arrayHorses[j];
				leadingHorse = j;
			}
		}

		cout << endl;
	}

    cout << "Horse " << leadingHorse+1 << " is the winner!" << endl;   // Message announcing the winner after the WHILE loop is terminated
}
