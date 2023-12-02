#include "../../../../player.h"
#include <iostream>
#include <string>
using namespace std;

void searchByNationality(Player*& firstPlayer) {
	string playerCountry;
	cout<<"Enter a country to search it's players:";
	cin>>playerCountry;
	Player *currentPlayer = firstPlayer;
	cout<<"The following players belongs to "<<playerCountry<<" :"<<endl;
	while (currentPlayer != nullptr) {
		if (currentPlayer->playerCountry == playerCountry) {
			cout<<"\t"<<currentPlayer->playerName<<endl;
			return;
		}
		currentPlayer = currentPlayer->nextPlayer;
	}
	cout << "No player with this nationality exists." << endl;
}
