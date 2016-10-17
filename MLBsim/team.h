#pragma once

#include <string>

using namespace std;

class Team
{
public:
	Team(std::string, std::string);
	~Team();
	void GetRecord();
private:
	int wins;
	int losses;

};