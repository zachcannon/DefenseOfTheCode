#include "Mage.h"

using namespace std;

Mage::Mage(string name, int attackDamage, int fireballDamage): 
	fireballDamage(fireballDamage) , MilitaryUnit(name, attackDamage) { };

void Mage::fight(MilitaryUnit &opponent) {
	//splash damage
	MilitaryUnit::fight(opponent);
}