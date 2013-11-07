#include "MilitaryUnit.h"

using namespace std;

MilitaryUnit::MilitaryUnit(string name, int attackDamage) {
	this->name = name;
	this->attackDamage = attackDamage;
	armorDefense = 5;
	health = 100;
};

void MilitaryUnit::receiveDamage(int damage) {
	health -= (damage - armorDefense);
}

string MilitaryUnit::getName() { return name; }

void MilitaryUnit::fight(MilitaryUnit *opponent) {
	opponent->receiveDamage(attackDamage);
};

bool MilitaryUnit::isAlive() {
	return this->health > 0;
}
