#include "../../player.h"
#include "../calculateAge/calculateAge.h"
#include <iostream>
#include <string>
using namespace std;

Player *createPlayer() {
  Player *newPlayer = new Player;
  cout << "Enter name: ";
  cin >> newPlayer->playerName;
  cout << "Enter country: ";
  cin >> newPlayer->playerCountry;
  cout << "Enter DOB (ddmmyyyy): ";
  cin >> newPlayer->playerDOB;

  newPlayer->playerAge = calculateAge(newPlayer->playerDOB);

  cout << "Enter date of debut: ";
  cin >> newPlayer->playerDateOfDebut;

  cout << "Enter no of matches played: ";
  cin >> newPlayer->playerNoOfMatchesPlayed;
  cout << "Enter category: ";
  cin >> newPlayer->playerCategory;
  cout << "Enter total runs taken: ";
  cin >> newPlayer->playerTotalRunsTaken;
  cout << "Enter batting average: ";
  cin >> newPlayer->playerBattingAverage;
  cout << "Enter best wicket figure: ";
  cin >> newPlayer->playerBestWicketFigure;
  cout << "Enter total wickets taken: ";
  cin >> newPlayer->playerTotalWicketsTaken;
  cout << "Enter total scores given: ";
  cin >> newPlayer->playerTotalRunsGiven;
  cout << "Enter total overs bowled: ";
  cin >> newPlayer->playerTotalOverBowled;

  newPlayer->nextPlayer = nullptr;
  return newPlayer;
}