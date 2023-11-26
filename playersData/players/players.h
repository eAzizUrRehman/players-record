#ifndef PLAYERS_H
#define PLAYERS_H
#include "../player/player.h"
#include <iostream>
using namespace std;

struct Players {
    Player* firstPlayer;
    
    Players() : firstPlayer(nullptr) {}

	void showPlayersMenu();
};

#endif