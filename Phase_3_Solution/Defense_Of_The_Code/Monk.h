#include "MilitaryUnit.h"

using namespace std;

class Monk:public MilitaryUnit {
	int healing_value;

public:
	Monk(string name, int attackDamage, int healing_value);
	
	void fight(MilitaryUnit &opponent);
};
