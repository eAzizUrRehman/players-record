#include "../../../../player.h"
#include <iostream>
#include <string>
using namespace std;

void searchByBestBowlingRecord(Player *&firstPlayer)
{
	if (firstPlayer == nullptr)
	{
		cout << "No players exists in the record." << endl;
		return;
	}
	Player *bestBowlingRecordPlayer = firstPlayer;
	Player *currentPlayer = firstPlayer->nextPlayer;

	while (currentPlayer != nullptr)
	{
		if (currentPlayer->playerTotalRunsGiven < bestBowlingRecordPlayer->playerTotalRunsGiven)
		{
			bestBowlingRecordPlayer = currentPlayer;
		}
		currentPlayer = currentPlayer->nextPlayer;
	}

	cout << "Player is " << bestBowlingRecordPlayer->playerName
		 << " whose total runs given is " << bestBowlingRecordPlayer->playerTotalRunsGiven << endl;
}