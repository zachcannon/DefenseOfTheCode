#include "DefenseOfTheCodeGame.h"

using namespace std;

DefenseOfTheCodeGame::DefenseOfTheCodeGame() {
	unitA = new MilitaryUnit(15);
	unitB = new MilitaryUnit(20);
};

string DefenseOfTheCodeGame::playRound() {
	while (!victoryCheck()) {
		unitA->fight(unitB);
		unitB->fight(unitA);
	}
	return declareWinner();
};

bool DefenseOfTheCodeGame::victoryCheck() {
	if (unitA->getHealth() <= 0 || unitB->getHealth() <=0)
		return true;
	else return false;
};

string DefenseOfTheCodeGame::declareWinner() {
	if (unitA->getHealth() <= 0 && unitB->getHealth() <=0)
		return "Tie!";
	else if (unitA->getHealth() <= 0) {
		return "Unit B is the victor!";
	} else if (unitB->getHealth() <= 0) {
		return "Unit A is the victor!";
	}
	return "There are no winners in war...";
};