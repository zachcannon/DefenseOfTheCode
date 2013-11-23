#include "Squad.h"

using namespace std;

Squad::Squad(string squadName) : squadName(squadName) { };

void Squad::engageInBattle(Squad& enemySquad) {
	while (this->hasUnitsAlive() && enemySquad.hasUnitsAlive()) {
		
		this->team.front()->fight(*enemySquad.team.front());
		enemySquad.team.front()->fight(*this->team.front());

		checkTheBattlefieldForDeath(enemySquad);
	}
}

void Squad::checkTheBattlefieldForDeath(Squad& enemySquad) {
	if (!this->team.front()->isAlive()) this->team.pop();
	if (!enemySquad.team.front()->isAlive()) enemySquad.team.pop();
}

void Squad::addUnitToSquad(string unitName) {
	MilitaryUnit * unit;

	if (unitName == "Mage") {
		unit = new Mage("Magey McMagerson", 20, 10);
	} else if (unitName == "Monk") {
		unit = new Monk("Monky McMonkerson", 20, 5);
	} else if (unitName == "Tank") {
		unit = new Tank("Tanky McTankerson", 20, 7);
	} else {
		unit = new MilitaryUnit("Plain Jane", 15);
	}

	this->team.push(unit);
}

bool Squad::hasUnitsAlive() {
	if (this->team.size() < 1) return false;
	else return true;
}

string Squad::getSquadName() { return this->squadName; }