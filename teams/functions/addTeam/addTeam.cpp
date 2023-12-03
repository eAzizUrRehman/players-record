#include "../../team.h"
#include <string>
using namespace std;

void addTeam(const string &teamName, Team *&firstTeam)
{
	Team *newTeam = new Team{teamName, nullptr};
	if (firstTeam == nullptr)
	{
		firstTeam = newTeam;
	}
	else
	{
		Team *currentTeam = firstTeam;
		while (currentTeam->nextTeam != nullptr)
		{
			currentTeam = currentTeam->nextTeam;
		}
		currentTeam->nextTeam = newTeam;
	}
}