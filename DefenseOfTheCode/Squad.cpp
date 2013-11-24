#include "Squad.h"

using namespace std;

Squad::Squad(string squadName) : squadName(squadName) { };

void Squad::engageInBattle(Squad& enemySquad) {
	while (this->hasUnitsAlive() && enemySquad.hasUnitsAlive()) {		
		this->team.front()->fight(enemySquad);
		enemySquad.team.front()->fight(*this);
		checkTheBattlefieldForDeath(enemySquad);
	}
}

void Squad::checkTheBattlefieldForDeath(Squad& enemySquad) {
	if (!this->team.front()->isAlive()) this->team.pop();
	if (!enemySquad.team.front()->isAlive()) enemySquad.team.pop();
}

void Squad::takeSplashDamage(int damage) {
	for (int i=0; i<team.size(); i++) {
		MilitaryUnit* unit = team.front();
		unit->receiveDamage(damage);
		team.pop();
		team.push(unit);
	}
}

void Squad::takeDamage(int damage) {
	team.front()->receiveDamage(damage);
}

void Squad::addUnit(string unitName) {
	MilitaryUnit * unit;

	if (unitName == "Mage") {
		unit = new Mage("Magey McMagerson", 20, 10);
	} else if (unitName == "Monk") {
		unit = new Monk("Monky McMonkerson", 20, 5);
	} else if (unitName == "Tank") {
		unit = new Tank("Tanky McTankerson", 20, 4);
	} else {
		unit = new MilitaryUnit("Plain Jane", 10);
	}

	this->team.push(unit);
}

bool Squad::hasUnitsAlive() {
	if (this->team.empty()) return false;
	else return true;
}

string Squad::getSquadName() { return this->squadName; }