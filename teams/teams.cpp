#include "./teams.h"
#include "./functions/addTeam/addTeam.h"
#include "./functions/deleteTeam/deleteTeam.h"
#include "./functions/editTeam/editTeam.h"
#include "./functions/showTeams/showTeams.h"

#include "../players/players.h"

#include <cstdlib> // to use exit()

using namespace std;

void Teams::showTeamsMenu() {
  string teamName, oldTeamName, newTeamName;
  int teamsMenu;

	Players players;

  do {
    cout << "\nTeams Menu:" << endl
         << "\t1. Add a team" << endl
         << "\t2. Edit team" << endl
         << "\t3. Delete a team" << endl
		<< "\t4. Show all teams" << endl
		<< "\t5. Enter players menu" << endl
		<< endl

		<<"\t9. Show current menu again"<<endl
		<<"\t0. Terminate the program"<<endl
		<< "Enter here: " ;
    cin >> teamsMenu;

    switch (teamsMenu) {
    case 1:
      cout << "Enter team name: ";
      cin >> teamName;
      addTeam(teamName, firstTeam);
      break;
    case 2:
      cout << "Enter team old name: ";
      cin >> oldTeamName;
      cout << "Enter team old name: ";
      cin >> newTeamName;
      editTeam(oldTeamName, newTeamName, firstTeam);
      break;
    case 3:
      cout << "Enter team name to delete: ";
      cin >> teamName;
      deleteTeam(teamName, firstTeam);
      break;
    case 4:
      showTeams(firstTeam);
      break;
	case 5:		
		players.showPlayersMenu();
		break;
    
    default:
      cout << "Invalid option" << endl;
    }
	   if(teamsMenu  != 9){
			cout << "Enter any option from the above again: ";
			 cin >> teamsMenu;
		 }

  } while (teamsMenu != 0);
}