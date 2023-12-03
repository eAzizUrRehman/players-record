#include "../../../../player.h"
#include <iostream>
#include <string>
using namespace std;

void searchByMostMatches(Player *&firstPlayer)
{
	if (firstPlayer == nullptr)
	{
		cout << "No players exists in the record." << endl;
		return;
	}
	Player *mostMatchesPlayer = firstPlayer;
	Player *currentPlayer = firstPlayer->nextPlayer;

	while (currentPlayer != nullptr)
	{
		if (currentPlayer->playerNoOfMatchesPlayed > mostMatchesPlayer->playerNoOfMatchesPlayed)
		{
			mostMatchesPlayer = currentPlayer;
		}
		currentPlayer = currentPlayer->nextPlayer;
	}

	cout << "The player is " << mostMatchesPlayer->playerName
		 << " whose played " << mostMatchesPlayer->playerNoOfMatchesPlayed << " matches." << endl;
}