#include <iostream>
#include "DefenseOfTheCodeGame.h"

using namespace std;

int main() {
	DefenseOfTheCodeGame game = DefenseOfTheCodeGame();

	string winner = game.playRound();

	cout << winner << endl;

	cin >> winner;
	return 0;
}