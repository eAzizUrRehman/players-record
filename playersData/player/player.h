#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

struct Player {
  string playerName, playerCountry, playerDOB, playerDateOfDebut, playerCategory, playerBestScore, playerBestWicketFigure;
	int playerTotalScores, playerTotalWickets, playerTotalScoresGiven;
	float playerTotalOverBowled;


  Player *nextPlayer;
};

#endif