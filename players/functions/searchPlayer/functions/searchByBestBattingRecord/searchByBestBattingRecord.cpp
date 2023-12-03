#include "../../../../player.h"
#include <iostream>
#include <string>
using namespace std;

void searchByBestBattingRecord(Player *&firstPlayer)
{
	if (firstPlayer == nullptr)
	{
		cout << "No players exists in the record." << endl;
		return;
	}
	Player *bestBattingRecordPlayer = firstPlayer;
	Player *currentPlayer = firstPlayer->nextPlayer;

	while (currentPlayer != nullptr)
	{
		if (currentPlayer->playerTotalRunsTaken > bestBattingRecordPlayer->playerTotalRunsTaken)
		{
			bestBattingRecordPlayer = currentPlayer;
		}
		currentPlayer = currentPlayer->nextPlayer;
	}

	cout << "Player is " << bestBattingRecordPlayer->playerName
		 << " whose total runs taken is " << bestBattingRecordPlayer->playerTotalRunsTaken << endl;
}