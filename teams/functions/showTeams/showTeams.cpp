#include "../../team.h"
#include <iostream>
#include <string>

void showTeams(Team *&firstTeam)
{
  Team *currentTeam = firstTeam;
  while (currentTeam != nullptr)
  {
    cout << currentTeam->teamName << endl;
    currentTeam = currentTeam->nextTeam;
  }
}