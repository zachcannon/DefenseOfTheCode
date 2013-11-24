#include "Squad.h"
#include "MilitaryUnit.h"

using namespace std;

MilitaryUnit::MilitaryUnit(string name, int attackDamage) : name(name), attackDamage(attackDamage) {
	armorDefense = 5;
	health = 100;
};

void MilitaryUnit::receiveDamage(int damage) {
	health -= (damage - armorDefense);
}

void MilitaryUnit::fight(Squad &enemySquad) {
	enemySquad.takeDamage(attackDamage);
}

bool MilitaryUnit::isAlive() {
	return this->health > 0;
}

string MilitaryUnit::getName() { return name; }