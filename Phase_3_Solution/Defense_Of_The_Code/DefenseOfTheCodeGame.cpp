#include "DefenseOfTheCodeGame.h"

using namespace std;

DefenseOfTheCodeGame::DefenseOfTheCodeGame() {
	squadA = new Squad("Squadsy A");
	squadB = new Squad("Squadsy B");

	squadA->addUnitToSquad("MilitaryUnit");
	squadA->addUnitToSquad("Tank");
	squadA->addUnitToSquad("Monk");

	squadB->addUnitToSquad("Tank");
	squadB->addUnitToSquad("Monk");
	squadB->addUnitToSquad("Mage");
};

void DefenseOfTheCodeGame::run() {
	squadA->engageInBattle(*squadB);
};

bool DefenseOfTheCodeGame::isDraw() {
	return !squadA->hasUnitsAlive() && !squadB->hasUnitsAlive();
}

string DefenseOfTheCodeGame::getWinner() {
	if (squadA->hasUnitsAlive()) return squadA->getSquadName();
	else return squadB->getSquadName();
}