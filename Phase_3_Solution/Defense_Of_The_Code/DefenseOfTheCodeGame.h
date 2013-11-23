#include <string>
#include "Squad.h"

using namespace std;

class DefenseOfTheCodeGame{
	Squad *squadA;
	Squad *squadB;
	void playRound();
public:
	DefenseOfTheCodeGame();
	void run();
	bool isGameOver();
	bool isDraw();
	string getWinner();
};