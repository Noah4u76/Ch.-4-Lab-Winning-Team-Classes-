//
// File: Team.h
// Description: Winning Teams (Classes)
// Created: Sun. March 12, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//
#ifndef TEAMH
#define TEAMH

#include <string>

using namespace std;

class Team {
private:
  string name =
      "NoName"; // DONE: Declare private data members - name, wins, losses
  int wins = 0;
  int losses = 0;

public:
  void SetName(string newName); // DONE: Declare mutator functions -
  void SetWins(int numWins);    //       SetName(), SetWins(), SetLosses()
  void SetLosses(int numLosses);
  string GetName(); // DONE: Declare accessor functions -
  int GetWins();    //       GetName(), GetWins(), GetLosses()
  int GetLosses();
  double GetWinPercentage(); // DONE: Declare GetWinPercentage()
  void PrintStanding();      // DONE: Declare PrintStanding()
};

#endif