#include "../../../player/player.h"
#include <iostream>
#include <string>

void deletePlayer(const string &playerName, Player*& firstPlayer) {
	Player *currentPlayer = firstPlayer;
	Player *prevPlayer = nullptr;
	while (currentPlayer != nullptr) {
		if (currentPlayer->playerName == playerName) {
			if (prevPlayer == nullptr) { // Deleting the first Player
				firstPlayer = currentPlayer->nextPlayer;
			} else {
				prevPlayer->nextPlayer = currentPlayer->nextPlayer;
			}
			delete currentPlayer;
			return;
		}
		prevPlayer = currentPlayer;
		currentPlayer = currentPlayer->nextPlayer;
	}
	cout << "Player not found." << endl;
}