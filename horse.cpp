#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include "horse.h"

using namespace std;

Horse::Horse(){
	Horse::position=1;
}

int Horse::get_num()    // Function to get user's desired number of horses
{      
   int numberOfHorses;

	cout << "Enter number of horses:" << endl;     // Prompt user to enter number of horses
	cin >> numberOfHorses;
	cout << endl;

	while (numberOfHorses<2)     // Continue to prompt the user for a valid number of horses if entered value is less than 2
	{
		cout << "Number of horses cannot be less than 2, try again!" << endl << endl;
		cout << "Enter number of horses:" << endl;
		cin >> numberOfHorses;
		cout << endl;
	}
	
	return numberOfHorses;
}

bool Horse::checkMovement(int horseNumber)    // Function to determine if each horse moves forward or stays in place
{
    int randomNumber = rand()%2;    // Horse movement is based on this random number
    bool moveForward;

    if (randomNumber==0)        // If the random number is 0, this boolean function returns true (horse advances)
    {
        moveForward=true;
    }
    else             // If the random number is 1, this boolean function returns false (horse remains in current position)
    {
        moveForward=false;
    }

    return moveForward;
}
