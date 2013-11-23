#include "Tank.h"

using namespace std;

Tank::Tank(string name, int attackDamage, int damageReduction): 
	damageReduction(damageReduction) , MilitaryUnit(name, attackDamage) { };

void Tank::receiveDamage(int damage) {
	int damageDone = damage - armorDefense;
	damageDone -= damageReduction;
	health -= damageDone;
}