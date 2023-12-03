#include "../../../../player.h"
#include <iostream>
#include <string>
using namespace std;

void searchByEldestAge(Player *&firstPlayer)
{
	if (firstPlayer == nullptr)
	{
		cout << "No players exists in the record." << endl;
		return;
	}
	Player *eldestPlayer = firstPlayer;
	Player *currentPlayer = firstPlayer->nextPlayer;

	while (currentPlayer != nullptr)
	{
		if (currentPlayer->playerAge > eldestPlayer->playerAge)
		{
			eldestPlayer = currentPlayer;
		}
		currentPlayer = currentPlayer->nextPlayer;
	}

	cout << "Eldest player is " << eldestPlayer->playerName
		 << " whose age is " << eldestPlayer->playerAge << endl;
}