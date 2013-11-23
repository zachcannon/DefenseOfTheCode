#ifndef MILITARYUNIT_H
#define MILITARYUNIT_H

#include <string>

using namespace std;

class MilitaryUnit{
protected:
	string name;
	int attackDamage;
	int armorDefense;
	int health;

public:
	MilitaryUnit(string name, int attackDamage);
	virtual void fight(MilitaryUnit &opponent);
	virtual void receiveDamage(int damage);
	string getName();
	bool isAlive();
};

#endif