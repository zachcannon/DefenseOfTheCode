#include "MilitaryUnit.h"

using namespace std;

class Squad;

class Monk:public MilitaryUnit {
	int healing_value;

public:
	Monk(string name, int attackDamage, int healing_value);

	void fight(Squad &enemySquad);
};
