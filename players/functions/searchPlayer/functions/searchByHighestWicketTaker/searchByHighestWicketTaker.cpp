#include "../../../../player.h"
#include <iostream>
#include <string>
using namespace std;

void searchByHighestWicketTaker(Player *&firstPlayer)
{
	if (firstPlayer == nullptr)
	{
		cout << "No players exists in the record." << endl;
		return;
	}
	Player *highestWicketTakerPlayer = firstPlayer;
	Player *currentPlayer = firstPlayer->nextPlayer;

	while (currentPlayer != nullptr)
	{
		if (currentPlayer->playerTotalWicketsTaken > highestWicketTakerPlayer->playerTotalWicketsTaken)
		{
			highestWicketTakerPlayer = currentPlayer;
		}
		currentPlayer = currentPlayer->nextPlayer;
	}

	cout << "Player is " << highestWicketTakerPlayer->playerName
		 << " who took " << highestWicketTakerPlayer->playerTotalWicketsTaken << " wickets" << endl;
}