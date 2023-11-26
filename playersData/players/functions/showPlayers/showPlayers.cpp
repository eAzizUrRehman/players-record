#include "../../../player/player.h"
#include <iostream>
#include <string>

void showPlayers(Player *&firstPlayer)
{
  Player *currentPlayer = firstPlayer;
  while (currentPlayer != nullptr)
  {
    cout << currentPlayer->playerName << endl;
    currentPlayer = currentPlayer->nextPlayer;
  }
}