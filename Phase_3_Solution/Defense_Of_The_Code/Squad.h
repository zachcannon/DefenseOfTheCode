#include <string>
#include <queue>
#include "MilitaryUnit.h"
#include "Monk.h"
#include "Tank.h"
#include "Mage.h"

using namespace std;

class Squad {
	string squadName;
	queue<MilitaryUnit*> team;
	void checkTheBattlefieldForDeath(Squad& enemySquad);

public:
	Squad(string squadName);
	void engageInBattle(Squad& enemySquad);
	void addUnitToSquad(string unitType);
	bool hasUnitsAlive();
	string getSquadName();
};