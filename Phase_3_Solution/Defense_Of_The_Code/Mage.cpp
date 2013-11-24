#include "Squad.h"
#include "Mage.h"

using namespace std;

Mage::Mage(string name, int attackDamage, int fireballDamage): 
	fireballDamage(fireballDamage) , MilitaryUnit(name, attackDamage) { };

void Mage::fight(Squad &enemySquad) {
	enemySquad.takeSplashDamage(fireballDamage);
	MilitaryUnit::fight(enemySquad);
}


