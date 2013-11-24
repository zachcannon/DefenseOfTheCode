#ifndef MILITARYUNIT_H
#define MILITARYUNIT_H

#include <string>

using namespace std;

class Squad;

class MilitaryUnit{
protected:
	string name;
	int attackDamage;
	int armorDefense;
	int health;

public:
	MilitaryUnit(string name, int attackDamage);

	virtual void fight(Squad &enemySquad);
	virtual void receiveDamage(int damage);
	bool isAlive();

	string getName();
};

#endif