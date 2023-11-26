#include "player.h"

Player* createPlayer(string playerName, string playerCountry, string playerDOB, string playerDateOfDebut, string playerCategory, string playerBestScore, string playerBestWicketFigure, int playerTotalScores, int playerTotalWickets, int playerTotalScoresGiven, float playerTotalOverBowled) {
	Player* newPlayer = new Player;
	newPlayer->playerName = playerName;
	newPlayer->playerCountry = playerCountry;
	newPlayer->playerDOB = playerDOB;
	newPlayer->playerDateOfDebut = playerDateOfDebut;
	newPlayer->playerCategory = playerCategory;
	newPlayer->playerBestScore = playerBestScore;
	newPlayer->playerBestWicketFigure = playerBestWicketFigure;
	newPlayer->playerTotalScores = playerTotalScores;
	newPlayer->playerTotalWickets = playerTotalWickets;
	newPlayer->playerTotalScoresGiven = playerTotalScoresGiven;
	newPlayer->playerTotalOverBowled = playerTotalOverBowled;
	newPlayer->nextPlayer = nullptr;
	return newPlayer;
}
