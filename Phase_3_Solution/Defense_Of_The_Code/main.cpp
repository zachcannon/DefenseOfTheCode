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

int main() {
	DefenseOfTheCodeGame game = DefenseOfTheCodeGame();

	game.run();

	string winner = game.getWinner();
	printWinner(game);

	char anyKey;
	cin >> anyKey;

	return 0;
}
