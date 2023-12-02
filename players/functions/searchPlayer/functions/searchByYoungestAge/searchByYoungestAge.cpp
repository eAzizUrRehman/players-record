#include "../../../../player.h"
#include <iostream>
#include <string>
using namespace std;

void searchByYoungestAge(Player *&firstPlayer) {
  if (firstPlayer == nullptr) {
    cout << "No players exists in the record." << endl;
    return;
  }
  Player *youngestPlayer = firstPlayer;
  Player *currentPlayer = firstPlayer->nextPlayer;

  while (currentPlayer != nullptr) {
    if (currentPlayer->playerAge < youngestPlayer->playerAge) {
      youngestPlayer = currentPlayer;
    }
    currentPlayer = currentPlayer->nextPlayer;
  }

  cout << "Youngest player is " << youngestPlayer->playerName
       << " whose age is " << youngestPlayer->playerAge << endl;
}