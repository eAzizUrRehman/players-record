#include "../../../../player.h"
#include <iostream>
#include <string>
using namespace std;

void searchByBestBattingAverage(Player *&firstPlayer) {
	if (firstPlayer == nullptr) {
		cout << "No players exists in the record." << endl;
		return;
	}
  Player *bestBattingAveragePlayer = firstPlayer;
  Player *currentPlayer = firstPlayer->nextPlayer;

  while (currentPlayer != nullptr) {
	if (currentPlayer->playerBattingAverage > bestBattingAveragePlayer->playerBattingAverage) {
	  bestBattingAveragePlayer = currentPlayer;
	}
	currentPlayer = currentPlayer->nextPlayer;
  }

  cout << "Player is " << bestBattingAveragePlayer->playerName
	   << " whose best batting average is " << bestBattingAveragePlayer->playerBattingAverage << endl;
}