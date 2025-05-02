#include <iostream>
#include <string>
#include "PlayGame.h"

int main()
{
	char playAgain;

	do {
		PlayGame theGame;
		theGame.play();

		std::cout << "Do you want to play again? (y/n)? "; std::cin >> playAgain;
	} while (playAgain == 'y');
}
