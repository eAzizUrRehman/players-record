#include "../../team.h"
#include <iostream>
#include <string>

void deleteTeam(const string &teamName, Team*& firstTeam) {
	Team *currentTeam = firstTeam;
	Team *prevTeam = nullptr;
	while (currentTeam != nullptr) {
		if (currentTeam->teamName == teamName) {
			if (prevTeam == nullptr) { // Deleting the first team
				firstTeam = currentTeam->nextTeam;
			} else {
				prevTeam->nextTeam = currentTeam->nextTeam;
			}
			delete currentTeam;
			return;
		}
		prevTeam = currentTeam;
		currentTeam = currentTeam->nextTeam;
	}
	cout << "Team doesn't exist." << endl;
}