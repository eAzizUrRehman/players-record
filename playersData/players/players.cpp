#include "./players.h"
#include "./functions/addPlayer/addPlayer.h"
#include "./functions/deletePlayer/deletePlayer.h"
#include "./functions/editPlayer/editPlayer.h"
#include "./functions/showPlayers/showPlayers.h"
#include <cstdlib> // to use exit()

using namespace std;

void Players::showPlayersMenu() {
  string playerName, playerCountry,playerCategory;
  int playersMenu;

  do {
    cout << "Players Menu:" << endl
         << "\t1. Add a player" << endl
         << "\t2. Edit player" << endl
         << "\t3. Delete a player" << endl
         << "\t4. Show all players" << endl
         << "\t0. Exit the program" << endl;
    cin >> playersMenu;

    switch (playersMenu) {
    case 1:
      addPlayer(firstPlayer);
      break;
    case 2:
      cout << "Enter player name: ";
      cin >> playerName;
      cout << "Enter player old name: ";
      cin >> playerCountry;
      cout << "Enter player category: ";
      cin >> playerCategory;
		
      editPlayer(playerName, playerCountry, playerCategory, firstPlayer);
      break;
    case 3:
      cout << "Enter player name to delete: ";
      cin >> playerName;
      deletePlayer(playerName, firstPlayer);
      break;
    case 4:
      showPlayers(firstPlayer);
      break;
    case 0:
      exit(0);
    default:
      cout << "Invalid option" << endl;
      break;
    }

    cout << "Enter 0 to exit, 9 to menu" << endl;
    cin >> playersMenu;

  } while (playersMenu != 0);
}