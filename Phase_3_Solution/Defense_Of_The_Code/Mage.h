#include "MilitaryUnit.h"

using namespace std;

class Mage:public MilitaryUnit {
	int fireballDamage;

public:
	Mage(string name, int attackDamage, int fireballDamage);
	
	void fight(MilitaryUnit &opponent);
};
