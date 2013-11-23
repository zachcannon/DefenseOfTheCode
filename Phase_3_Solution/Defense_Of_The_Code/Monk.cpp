#include "Monk.h"

using namespace std;

Monk::Monk(string name, int attackDamage, int healing_value): 
	healing_value(healing_value) , MilitaryUnit(name, attackDamage) { };

void Monk::fight(MilitaryUnit &opponent) {
	health += healing_value;
	MilitaryUnit::fight(opponent);
};