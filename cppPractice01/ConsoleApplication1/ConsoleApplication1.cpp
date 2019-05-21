// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	double weight;
	int x;

	std::cout << "Please input your weight in the Earth: ";
	std::cin >> weight;

	std::cout << "Here is list of the Planets.";
	std::cout << "\n 1. Venus    2. Mars    3. Jupiter    4. Saturn    5. Uranus    6. Neptune\n";
	std::cout << "Which Planet are you visitting? : ";
	std::cin >> x;

	if (x == 1) {
		weight = weight * 0.78;
	} 
	else if (x == 2) {
		weight = weight * 0.39;
	}
	else if (x == 3) {
		weight = weight * 2.65;
	}
	else if (x == 4) {
		weight = weight * 1.17;
	}
	else if (x == 5) {
		weight = weight * 1.05;
	}
	else if (x == 6) {
		weight = weight * 1.23;
	}
	else
	{
		std::cout << "Wrong input!!!!";
	}

	std::cout << "Your weight is " << weight;
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
