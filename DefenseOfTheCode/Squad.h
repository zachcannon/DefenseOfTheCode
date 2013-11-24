#ifndef SQUAD_H
#define SQUAD_H

#include <string>
#include <queue>
#include "MilitaryUnit.h"
#include "Monk.h"
#include "Tank.h"
#include "Mage.h"

using namespace std;

class Squad {
	string squadName;
	void checkTheBattlefieldForDeath(Squad& enemySquad);	
	queue<MilitaryUnit*> team;

public:
	Squad(string squadName);
	void addUnit(string unitType);

	void engageInBattle(Squad& enemySquad);
	bool hasUnitsAlive();
	void takeSplashDamage(int damage);
	void takeDamage(int damage);

	string getSquadName();
};

#endif