// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int pin = 0;
	int tries = 0;

	std::cout << "Welcome to Bank!\n";
	std::cout << "Enter your PIN: ";
	std::cin >> pin;

	while (pin != 1234 && tries <= 4)
	{
		std::cout << "Your wrong tries: " << tries;
		std::cout << "\nEnter your PIN: ";
		std::cin >> pin;
		tries++;
		
	}
	if (pin == 1234) {
		std::cout << "\nPIN accepted!!";
		std::cout << "\nYou now have access!\n\n";
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
