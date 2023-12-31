#include "./players.h"
#include "./functions/addPlayer/addPlayer.h"
#include "./functions/deletePlayer/deletePlayer.h"
#include "./functions/editPlayer/editPlayer.h"
#include "./functions/showPlayers/showPlayers.h"
#include "./functions/searchPlayer/searchPlayer.h"
#include <cstdlib> // to use exit()

using namespace std;

void Players::showPlayersMenu()
{
  string playerName, playerCountry, playerCategory;
  int playersMenu;

  do
  {
    cout << "\nPlayers Menu:" << endl
         << "\t1. Add a player" << endl
         << "\t2. Edit player" << endl
         << "\t3. Delete a player" << endl
         << "\t4. Show all players" << endl
         << "\t5. Search for a player" << endl

         << "Enter here: ";
    cin >> playersMenu;
    while (playersMenu < 0 || playersMenu > 5)
    {
      cout << "Invalid input. Enter again: ";
      cin >> playersMenu;
    }

    switch (playersMenu)
    {
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
    case 5:
      searchPlayer(firstPlayer);
      playersMenu = 9;
    }
    if (playersMenu != 0)
    {
      cout << "\nEnter 9 to show 'Players Menu' again or 0 to exit this menu: ";

      cin >> playersMenu;
      while (playersMenu != 0 && playersMenu != 9)
      {
        cout << "Invalid input. Enter again: ";
        cin >> playersMenu;
      }
    }
  } while (playersMenu != 0);
}