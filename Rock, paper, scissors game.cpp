#include <iostream> 

const char Rock = 'r';
const char Paper = 'P';
const char Scissors = 's';

using namespace std;

char charGetComputerOption()
{
	srand(time(0));
	int num = rand() % 3 + 1;
	if (num == 1) return 'r';
	if (num == 2) return 'p';
	if (num == 3) return 's';

}
char charGetUserOption() 
{
	char c;
	std::cout << "Rock, Paper and Scissors Game!" << '\n';
	std::cout << "Choose one of the following options" << '\n';
	std::cout << "-----------------------------------" << '\n';
	std::cout << "(r) for Rock " << '\n' << "(p) for Paper" << '\n' << "(s) for Scissors " << '\n';

	std::cin >> c;
	while (c != 'r' && c != 'p' && c != 's');

	std::cout << "Please enter one of the following options only!" << '\n';
	std::cout << "(r) for Rock" << '\n' << "(p) for Paper" << '\n' << "(s) for Scissors" << '\n';
	return c;
}


void showSelectedOption(char option)
{
	if (option == 'r') std::cout << "Rock" << '\n';
	if (option == 'p') std::cout << "Paper" << '\n';
	if (option == 's') std::cout << "Scissors" << '\n';
}
void chooseWinnerOption(char uChoice, char cChoice)
{
	if (uChoice == Rock && cChoice == Paper)
	{
		std::cout << "Computer Wins! Paper Wraps Rock" << '\n';
	}
	else if (uChoice == Paper && cChoice == Scissors)
	{
		std::cout << "Computer Wins! Scissors Cut Paper" << '\n';
	}
	else if (uChoice == Scissors && cChoice == Rock)
	{
		std::cout << "Computer Wins! Rock Breaks Scissors" << '\n';
	}
	else if (uChoice == Paper && cChoice == Rock)
	{
		std::cout << "You Win! Paper Wraps Rock" << '\n';
	}
	else if (uChoice == Rock && cChoice == Scissors)
	{
		std::cout << "You Win! Rock Breaks Scissors" << '\n';
	}
	else if (uChoice == Scissors && cChoice == Paper)
	{
		std::cout << "You Win! Scissors Cuts Paper" << '\n';
	}
	else if (uChoice == Rock && cChoice == Rock)
	{
		std::cout << "Tie! Play Again" << '\n';
	}
	else if (uChoice == Paper && cChoice == Paper)
	{
		std::cout << "Tie! Play Again" << '\n';
	}
	else if (uChoice == Scissors && cChoice == Scissors)
	{
		std::cout << "Tie! Play Again" << '\n';
	}
	}

	int main()
	{
		char uChoice;
		char cChoice;
		uChoice = charGetUserOption();
		std::cout << "Your choice is" << '\n';

		showSelectedOption(uChoice);
		std::cout << "Computer choice is" << '\n';

		cChoice = charGetComputerOption();
		showSelectedOption (cChoice);

		chooseWinnerOption(uChoice, cChoice);

		return 0;
	}