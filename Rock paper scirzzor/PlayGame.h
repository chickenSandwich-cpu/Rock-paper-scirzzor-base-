#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime> 

class PlayGame
{
public:
	void play()
	{
		srand(time(0));
		randomChoice = rand() % 3 + 1;
		//std::cout << randomChoice; //debug message

		std::cout << "Choose between: \n\t1. rock\n\t2. paper\n\t3. scissors\n"; std::cout << "Your choice: "; std::cin >> choice;

		if (choice < 1 || choice > 3) {
			std::cout << "Invalid choice! Please choose 1, 2, or 3.\n";
		}

		if (choice == randomChoice) {
			std::cout << "It's a draw!\n";
		}
		else if ((choice == 1 && randomChoice == 3) || (choice == 2 && randomChoice == 1) || (choice == 3 && randomChoice == 2)) {
			std::cout << "Player wins!!\n";
		}
		else {
			std::cout << "Player loses! Computer wins!\n";
		}

		std::vector<std::string> choices = { "rock", "paper", "scissors" };
		if (randomChoice == 1) {
			std::cout << "Computer chose: " << choices[0] << "\n";
		}
		else if (randomChoice == 2) {
			std::cout << "Computer chose: " << choices[1] << "\n";
		}
		else {
			std::cout << "Computer chose: " << choices[2] << "\n";
		}
	}

private:
	int choice;
	int randomChoice;
};

