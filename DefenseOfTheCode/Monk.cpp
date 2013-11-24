#include "Monk.h"

using namespace std;

Monk::Monk(string name, int attackDamage, int healing_value): 
	healing_value(healing_value) , MilitaryUnit(name, attackDamage) { };

void Monk::fight(Squad &enemySquad) {
	health += healing_value;
	MilitaryUnit::fight(enemySquad);
};