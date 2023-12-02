#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

struct Player {
  string playerName, playerCountry, playerDOB, playerDateOfDebut,
      playerCategory, playerBestWicketFigure;
  int   playerTotalWicketsTaken, playerTotalRunsGiven, playerAge,
      playerNoOfMatchesPlayed, playerTotalRunsTaken 
      ;
  float playerTotalOverBowled, playerBattingAverage;

  Player *nextPlayer;
};

#endif
