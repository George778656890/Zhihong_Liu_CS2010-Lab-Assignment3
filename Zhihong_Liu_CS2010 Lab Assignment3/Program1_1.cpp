#include <iostream>

int main()
{
	extern int dollar;
	extern int quarter;
	extern int dime;
	extern int nickel;
	extern int penny;
	int userInput = 0;
	int tmp = 0;

	std::cout << "Please input a positive integer(<=100) : ";
	std::cin >> userInput ;

	dollar = (100-userInput) / 100;
	tmp = (100-userInput) % 100;

	quarter = tmp / 25;
	tmp %= 25;

	dime = tmp / 10;
	tmp %= 10;

	nickel = tmp / 5;
	tmp %= 5;

	penny = tmp;

	std::cout << "Your change is : "<<"\n\n";
	std::cout << "Dollar : " << dollar << "\n";
	std::cout << "Quarter : " << quarter << "\n";
	std::cout << "Dime : " << dime << "\n";
	std::cout << "Nicker : " << nickel << "\n";
	std::cout << "Penny : " << penny << "\n";
	return 0;
}

