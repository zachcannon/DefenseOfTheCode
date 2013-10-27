#include "MilitaryUnit.h"

using namespace std;

class DefenseOfTheCodeGame{
	MilitaryUnit *unitA;
	MilitaryUnit *unitB;

public:
	DefenseOfTheCodeGame();

	string playRound();

	bool victoryCheck();

	string declareWinner();
};