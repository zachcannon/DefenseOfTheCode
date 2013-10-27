#include <string>

using namespace std;

class MilitaryUnit{
	int attackValue;
	int defenseValue;
	int health;

public:
	MilitaryUnit(int attackVal);

	MilitaryUnit* fight(MilitaryUnit *opponent);

	
	void updateHealth(int damage) {health -= damage;}

	int getAttackValue() {return attackValue;}
	int getDefenseValue() {return defenseValue;}
	int getHealth() {return health;}
};