#include "MilitaryUnit.h"

using namespace std;

class Squad;

class Tank:public MilitaryUnit {
	int damageReduction;

public:
	Tank(string name, int attackDamage, int damageReduction);
	
	void receiveDamage(int damage);
};
