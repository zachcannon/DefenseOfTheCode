#include "DefenseOfTheCodeGame.h"

using namespace std;

DefenseOfTheCodeGame::DefenseOfTheCodeGame(MilitaryUnit& unitA, MilitaryUnit& unitB) {
	this->unitA = unitA;
	this->unitB = unitB;
};

void DefenseOfTheCodeGame::run() {
	while (!isGameOver()) {
		playRound();
	}
};

void DefenseOfTheCodeGame::playRound() {
	unitA.fight(unitB);
	unitB.fight(unitA);
}

bool DefenseOfTheCodeGame::isGameOver() {
	return !unitA.isAlive() || !unitB.isAlive();
};

bool DefenseOfTheCodeGame::isDraw() {
	return !unitA.isAlive() && !unitB.isAlive();
}

string DefenseOfTheCodeGame::getWinner() {
	if (unitA.isAlive()) return unitA.getName();
	return unitB.getName();
}