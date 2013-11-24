#include <iostream>
#include <string>
#include "DefenseOfTheCodeGame.h"

using namespace std;

void printWinner(DefenseOfTheCodeGame game) {
	if (game.isDraw())
		cout << "Tie!" << endl;
	else {
		string winner = game.getWinner();
		cout << winner << " is the victor!" << endl;
	}
}

vector<string> getInputForSquad() {
	vector<string> squad;
	for (int i=0; i<3; i++) {
		string unitChoice;
		cout << "Unit types: Tank, Monk, Mage, or Basic" << endl;
		cout << "Enter the type of unit to add to squad: ";
		cin >> unitChoice;

		squad.push_back(unitChoice);
	}
	return squad;
}

int main() {

	cout << "Popluating: Squad A" << endl;
	vector<string> squadA = getInputForSquad();
	cout << "Popluating: Squad B" << endl;
	vector<string> squadB = getInputForSquad();


	DefenseOfTheCodeGame game = DefenseOfTheCodeGame(squadA, squadB);

	game.run();

	printWinner(game);

	char anyKey;
	cin >> anyKey;

	return 0;
}
