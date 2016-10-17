#pragma once

#include "team.h"

class Season
  {
  public:
	Season();
	~Season();
	void BuildSchedule();
	Team PlayGame(Team, Team);
  private:
	int day[];
  };
