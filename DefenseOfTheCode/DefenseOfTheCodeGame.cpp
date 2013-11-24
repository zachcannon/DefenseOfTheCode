#include "DefenseOfTheCodeGame.h"

using namespace std;

DefenseOfTheCodeGame::DefenseOfTheCodeGame(vector<string> squadAUnits, vector<string> squadBUnits) {
	squadA = new Squad("Squad A");
	squadB = new Squad("Squad B");

	popluateSquad(*squadA, squadAUnits);
	popluateSquad(*squadB, squadBUnits);
};

void DefenseOfTheCodeGame::popluateSquad(Squad & squad, vector<string> squadUnits) {
	for (int i=0; i<squadUnits.size(); i++) {
		squad.addUnit( squadUnits.at(i));
	}
}

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