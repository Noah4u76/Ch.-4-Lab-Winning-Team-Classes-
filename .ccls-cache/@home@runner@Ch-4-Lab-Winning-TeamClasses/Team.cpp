//
// File: Team.cpp
// Description: Winning Teams (Classes)
// Created: Sun. March 12, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//
#include <iostream>
#include <iomanip> 
#include "Team.h"
using namespace std;


void Team::SetName(string newName) {    // DONE: Implement mutator functions - 
  name = newName;                       //       SetName(), SetWins(), SetLosses()
}
void Team::SetWins(int numWins){
  wins = numWins;
}
void Team::SetLosses(int numLosses){
  losses = numLosses;
}
string Team::GetName(){                 // DONE: Implement accessor functions - 
  return name;                          //       GetName(), GetWins(), GetLosses()
} 
int Team::GetWins(){
  return wins;
}
int Team::GetLosses(){
  return losses;
}

double Team::GetWinPercentage(){        // DONE: Implement GetWinPercentage()
  double percent = 0;
  percent = static_cast<double>(wins) / (static_cast<double>(wins) + static_cast<double>(losses));
    return percent;
}

void Team::PrintStanding() {            // DONE: Implement PrintStanding()
  double percent = this -> GetWinPercentage();
  cout << "Win Percentage: " << fixed << setprecision(2) << percent << endl;
  if (percent >= 0.5) {
    cout << "Congratulations, Team " << name << " has a winning average!" << endl;
    } 
  else {
    cout << "Team " << name << " has a losing average." << endl;
    }
}