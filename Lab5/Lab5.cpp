// Lab5.cpp

#include <iostream>
#include <Windows.h>
#include <string>

//Задача: Знайти цифрові корені всіх простих чисел з інтервалу [100, 200]
int main() {
	SetConsoleOutputCP(CP_UTF8);
	//setvbuf(stdout, nullptr, _IOFBF, 1000);

	std::cout << "Задача: Знайти цифрові корені всіх простих чисел з інтервалу [100, 200]\n";
	std::string divider(119, '=');
	std::cout << divider << "\n";

	for (int iterator = 100; iterator < 201; iterator++) {
		int number = iterator;
		std::string globalString(std::to_string(number) + " --> ");
		while (number >= 10) {
			int newNumber = 0;
			std::string localString("");
			while (number >= 10) {
				int digit = number % 10;
				newNumber += digit;
				localString = " + " + std::to_string(digit) + localString;
				number = number / 10;
			}
			newNumber += number;
			globalString += std::to_string(number) + localString + " --> ";
			number = newNumber;
			std::cout << globalString + std::to_string(number) + "\n";
		}
	}
}