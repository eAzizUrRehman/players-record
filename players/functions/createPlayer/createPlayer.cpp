#include "../../player.h"
#include "../calculateAge/calculateAge.h"
#include <iostream>
#include <string>
using namespace std;

Player* createPlayer() {
	Player* newPlayer = new Player;
	cout << "Enter name: ";
	cin >> newPlayer->playerName;
	cout << "Enter country: ";
	cin >> newPlayer->playerCountry;
	cout << "Enter DOB (ddmmyyyy): ";
	cin >> newPlayer->playerDOB;
	
	newPlayer->playerAge = calculateAge(newPlayer->playerDOB);
	
	cout << "Enter date of debut: ";
	cin >> newPlayer->playerDateOfDebut;
	cout << "Enter category: ";
	cin >> newPlayer->playerCategory;
	cout << "Enter best score: ";
	cin >> newPlayer->playerBestScore;
	cout << "Enter best wicket figure: ";
	cin >> newPlayer->playerBestWicketFigure;
	cout << "Enter total scores: ";
	cin >> newPlayer->playerTotalScores;
	cout << "Enter total wickets: ";
	cin >> newPlayer->playerTotalWickets;
	cout << "Enter total scores given: ";
	cin >> newPlayer->playerTotalScoresGiven;
	cout << "Enter total overs bowled: ";
	cin >> newPlayer->playerTotalOverBowled;

	newPlayer->nextPlayer = nullptr;
	return newPlayer;
}