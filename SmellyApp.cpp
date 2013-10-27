#include <iostream>
#include <string>
#include <vector>

using namespace std;

//index 0 is attack, 1 is defend, 2 health
int unitA[3];
int soldierB[3];

int getUnitAAttack() {
	return unitA[0];
}

int getUnitADefend() {
	return unitA[1];
}

int getUnitAHealth() {
	return unitA[2];
}

int getUnitBAttack() {
	return soldierB[0];
}

int getUnitBDefend() {
	return soldierB[1];
}

int getUnitBHealth() {
	return soldierB[2];
}

void playGame() {
	//health -= unitA attack - soldierB armor defense;
	soldierB[2] -= unitA[0] - soldierB[1];

	//health -= soldierB attack - unitA armor defense;
	unitA[2] -= soldierB[0] - unitA[1];
}

string getLastStandingPlayer() {
	if (unitA[2] > 0) return "Unit A";
	return "Unit B";
}

int main() {
	unitA[0] = 15;
	unitA[1] = 5;
	unitA[2] = 100;

	soldierB[0] = 20;
	soldierB[1] = 5;
	soldierB[2] = 100;

	while (unitA[2] > 0 && soldierB[2] > 0) {
		playGame();
	}

	
	if (!(unitA[2] > 0) && !(soldierB[2] > 0)) //if game is a tie
		cout << "Tie!" << endl;
	else //print out winner
		cout << getLastStandingPlayer() + " is the victor!" << endl;

	char anyKey;
	cin >> anyKey;

	return 0;
}
