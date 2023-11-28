#ifndef TEAMS_H
#define TEAMS_H
#include "./team.h"
#include <iostream>
using namespace std;

struct Teams {
    Team* firstTeam;
    
    Teams() : firstTeam(nullptr) {}

	void showTeamsMenu();
};

#endif