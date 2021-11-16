// Lab6.cpp

#include <iostream>
#include <Windows.h>
#include <string>

//Задача: Дано ненульові натруральні числа A, B та C. Обчислити сумму перших цифр
//        цих чисел, отримавши їх за допомогою визначеної функції.

int firstDigit(long long int n) { //функція знаходження першї цифри числа
	while (n > 9) n /= 10;
	return n;
}

int main() {
	SetConsoleOutputCP(CP_UTF8);
	//setvbuf(stdout, nullptr, _IOFBF, 1000);

	//виведення умови
	std::cout << "Задача: Дано ненульові натруральні числа A, B та C. Обчислити сумму перших цифр цих чисел, отримавши їх за допомогою\nвизначеної функції. \n";
	std::string divider(119, '=');
	std::cout << divider << "\n";

	//введення данних
	long long int a, b, c = 0;
	std::cout << "Введіть число A: ";
	std::cin >> a;
	std::cout << "Введіть число B: ";
	std::cin >> b;
	std::cout << "Введіть число C: ";
	std::cin >> c;

	//розрахунок і виведення результату
	std::cout << "==============================================================\n";
	if (a < 0 || b < 0 || c < 0) {
		std::cout << "Помилка: За умовою всі числа повинні бути додатніми\n";
	} else {
		std::cout << "Суми перших цифр з чисел A, B та C дорівнюе: " << (firstDigit(a) + firstDigit(b) + firstDigit(c)) << "\n";
	}
	system("pause");
}