#include "../../../player/player.h"
#include <iostream>
#include <string>
using namespace std;

void addPlayer(Player*& firstPlayer) {
	string playerName, playerCountry, playerDOB, playerDateOfDebut, playerCategory, playerBestScore, playerBestWicketFigure;
	int playerTotalScores, playerTotalWickets, playerTotalScoresGiven;
	float playerTotalOverBowled;

	cout << "Enter name: ";
	cin >> playerName;
	cout << "Enter country: ";
	cin >> playerCountry;
	cout << "Enter DOB: ";
	cin >> playerDOB;
	cout << "Enter date of debut: ";
	cin >> playerDateOfDebut;
	cout << "Enter category: ";
	cin >> playerCategory;
	cout << "Enter best score: ";
	cin >> playerBestScore;
	cout << "Enter best wicket figure: ";
	cin >> playerBestWicketFigure;
	cout << "Enter total scores: ";
	cin >> playerTotalScores;
	cout << "Enter total wickets: ";
	cin >> playerTotalWickets;
	cout << "Enter total scores given: ";
	cin >> playerTotalScoresGiven;
	cout << "Enter total overs bowled: ";
	cin >> playerTotalOverBowled;

	Player *newPlayer = new Player{playerName, playerCountry, playerDOB, playerDateOfDebut, playerCategory, playerBestScore, playerBestWicketFigure, playerTotalScores, playerTotalWickets, playerTotalScoresGiven, playerTotalOverBowled, nullptr};

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