#include "../../player.h"
#include "../createPlayer/createPlayer.h"


void addPlayer(Player*& firstPlayer) {
	Player *newPlayer = createPlayer();

	if (firstPlayer == nullptr) {
		firstPlayer = newPlayer;
	} else {
		Player *currentPlayer = firstPlayer;
		while (currentPlayer->nextPlayer != nullptr) {
			currentPlayer = currentPlayer->nextPlayer;
		}
		currentPlayer->nextPlayer = newPlayer;
	}
}