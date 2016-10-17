#include <string>
#include <iostream>
#include "Season.h"
#include "League.h"
#include "team.h"

using namespace std;

void createLeagues()
  {
	

	// Team chw;    Team hou;
	// Team cle;    Team laa;
	// Team det;    Team oak;
	// Team kc;     Team sea;
	// Team min;    Team tex;
  }

int main()
  {
  Season S;

  Team bal("Orioles", "Baltimore");
  Team bos("Red Sox", "Boston");
  Team nyy("Yankees", "New York");
  Team tb("Rays", "Tampa");
  Team tor("Blue Jays", "Toronto");
  
  League al ("American League");
  League nl ("National League");

  system("cls");

  cout << al.GetName() << endl;
  cout << nl.GetName() << endl;

  S.PlayGame(bos, bal);
  
  return 0;
  }