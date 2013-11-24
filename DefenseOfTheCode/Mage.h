#ifndef MAGE_H
#define MAGE_H

#include "MilitaryUnit.h"

using namespace std;

class Squad;

class Mage:public MilitaryUnit {
	int fireballDamage;

public:
	Mage(string name, int attackDamage, int fireballDamage);	

	void fight(Squad &enemySquad);
};

#endif