#pragma once

#include <string>;
using namespace std;

class League
  {
  public:
    League(string);
	string GetName();
    ~League();
  private:
	string name;
	//Division[] divisions;
  };

