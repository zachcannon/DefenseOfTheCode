#include <string>
#include "MilitaryUnit.h"

using namespace std;

class DefenseOfTheCodeGame{
	MilitaryUnit unitA;
	MilitaryUnit unitB;
	void playRound();
public:
	DefenseOfTheCodeGame(MilitaryUnit& unitA, MilitaryUnit& unitB);
	void run();
	bool isGameOver();
	bool isDraw();
	string getWinner();
};