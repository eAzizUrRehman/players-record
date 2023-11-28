#include "../../team.h"
#include <iostream>
#include <string>

void editTeam(const string &oldTeamName, const string &newTeamName, Team*& firstTeam) {
	Team *currentTeam = firstTeam;
	while (currentTeam != nullptr) {
		if (currentTeam->teamName == oldTeamName) {
			currentTeam->teamName = newTeamName;
			return;
		}
		currentTeam = currentTeam->nextTeam;
	}
	cout << "Team doesn't exist." << endl;
}