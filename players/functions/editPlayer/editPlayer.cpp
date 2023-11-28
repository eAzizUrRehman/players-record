#include "../../player.h"
#include <iostream>
#include <string>

void editPlayer(const string &playerName, const string &playerCountry,const string &playerCategory, Player*& firstPlayer) {
	Player *currentPlayer = firstPlayer;
	while (currentPlayer != nullptr) {
		if (currentPlayer->playerName == playerName) {
			currentPlayer->playerCountry = playerCountry;
			currentPlayer->playerCategory = playerCategory;
			return;
		}
		currentPlayer = currentPlayer->nextPlayer;
	}
	cout << "Player doesn't exist." << endl;
}
