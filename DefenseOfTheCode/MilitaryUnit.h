#include <string>

using namespace std;

class MilitaryUnit{
	string name;
	int attackDamage;
	int armorDefense;
	int health;

public:
	MilitaryUnit(string name, int attackDamage);
	void fight(MilitaryUnit &opponent);
	void receiveDamage(int damage);
	string getName();
	bool isAlive();
};