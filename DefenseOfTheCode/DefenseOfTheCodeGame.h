#include <string>
#include <iostream>
#include "Squad.h"

using namespace std;

class DefenseOfTheCodeGame{
	Squad *squadA;
	Squad *squadB;
	void playRound();
	bool isGameOver();
	void popluateSquad(Squad & squad, vector<string> squadName);
		
public:
	DefenseOfTheCodeGame(vector<string> squadA, vector<string> squadB);
	void run();
	bool isDraw();

	string getWinner();
};