#ifndef TEAM_H
#define TEAM_H
#include <string>
using namespace std;

struct Team
{
  string teamName;
  Team *nextTeam;
};

#endif