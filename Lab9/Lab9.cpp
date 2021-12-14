// Lab9.cpp

#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <string>
#include <stdlib.h>

int countCorrectWords(char[]);

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	//виведення умови
	std::cout << "Задача: Для введеного рядка порахувати кількість слів, що починаються і закінчуються однаковими літерами.\n";
	std::string divider(119, '=');
	std::cout << divider << "\n";

	//введення данних
	char inputStr[100];
    std::cout << "Введіть слова розділені пробілами:\n";
	gets_s(inputStr);

	//розрахунки
	int amount = countCorrectWords(inputStr);

	//виведення результату
	std::cout << "Кількість правильних слів: " << amount;
}

int countCorrectWords(char inputStr[]) {
	int amount = 0;
	char word[100];
	const char *delim = " ";
	char *p;
	char *np = NULL;
	p = strtok_s(inputStr, delim, &np);
	while (p != NULL) {
		strcpy_s(word, sizeof word, p);
		p = strtok_s(NULL, delim, &np);
		if (word[0] == word[strlen(word) - 1]) {
			amount++;
		}
	}
	return amount;
}