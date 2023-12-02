#include "../../player.h"
#include "./functions/searchByNationality/searchByNationality.h"
#include "./functions/searchByYoungestAge/searchByYoungestAge.h"
#include "./functions/searchByEldestAge/searchByEldestAge.h"
#include "./functions/searchByMostMatches/searchByMostMatches.h"
#include "./functions/searchByBestBattingAverage/searchByBestBattingAverage.h"
#include "./functions/searchByBestBattingRecord/searchByBestBattingRecord.h"
#include "./functions/searchByBestBowlingRecord/searchByBestBowlingRecord.h"
#include "./functions/searchByHighestWicketTaker/searchByHighestWicketTaker.h"
#include <iostream>
using namespace std;

void searchPlayer(Player*& firstPlayer) {
	int searchPlayerMenu;

	  do {
	cout << "\nSearch Player Menu:" << endl
		 << "\tSearch player by" << endl
		 << "\t1. Nationality" << endl
		 << "\t2. Youngest age" << endl
		 << "\t3. Eldest age" << endl
		 << "\t4. Most no of matches" << endl
		 << "\t5. Best batting average" << endl
		 << "\t6. Best batting record" << endl
		 << "\t7. Best bowling record" << endl
		 << "\t8. Highest wicket taker" << endl<< endl
		
		<<"\t9. Show current menu again"<<endl
		<<"\t0. Go to previous menu"<<endl
		<< "Enter here: " ;
		  cin >> searchPlayerMenu;

		  switch (searchPlayerMenu) {
			  case 1:
				  searchByNationality(firstPlayer);
				  break;
			  case 2:
				  searchByYoungestAge(firstPlayer);
				  break;
			  case 3:
				  searchByEldestAge(firstPlayer);
				  break;
			  case 4:
				  searchByMostMatches(firstPlayer);
				  break;
			  case 5:
				  searchByBestBattingAverage(firstPlayer);
				  break;
			  case 6:
				  searchByBestBattingRecord(firstPlayer);
				  break;
			  case 7:
				  searchByBestBowlingRecord(firstPlayer);
				  break;
			  case 8:
				  searchByHighestWicketTaker(firstPlayer);
				  break;
 				
					default:
	 				 cout << "Invalid option" << endl;
				}

		  cout << "Enter any option from the above again: ";
		cin >> searchPlayerMenu;

  } while (searchPlayerMenu != 0);
}
 