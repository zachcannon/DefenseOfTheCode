#include "MilitaryUnit.h"

using namespace std;

MilitaryUnit::MilitaryUnit(int attackVal) {
	attackValue = attackVal;
	defenseValue = 5;
	health = 100;
};

MilitaryUnit* MilitaryUnit::fight(MilitaryUnit *opponent) {
	int attackDamage = attackValue - opponent->getDefenseValue();
	opponent->updateHealth(attackDamage);
	return opponent;
};