// Lab7.cpp 

#include <iostream>
#include <Windows.h>
#include <string>
#include <stdlib.h>

// Задача: Для заданого масиву дійсних чисел, серед яких є і відемні, знайти величину і індекс
//         найменшого серед додатних чисел. Поміняти знайдений і максимальний елемент масиву.

void fillArray(int[], int);
void findMin(int[], int, int&, int&);
void findMax(int[], int, int&, int&);
void outputResult(int[], int, int, int, int, int);
void printArray(int[], int);

int main() {
	SetConsoleOutputCP(CP_UTF8);
	//setvbuf(stdout, nullptr, _IOFBF, 1000);

	//виведення умови
	std::cout << "Задача: Для заданого масиву дійсних чисел, серед яких є і відемні, знайти величину і індекс найменшого серед додатних\nчисел. Поміняти знайдений і максимальний елемент масиву.\n";
	std::string divider(119, '=');
	std::cout << divider << "\n";
	
	//встановлення початкових данних
	const int length = 10;
	int array[length];
	int minValue, minIndex, maxValue, maxIndex;

	//обробка і виведення данних
	fillArray(array, length);
	std::cout << "Масив: ";
	printArray(array, length);
	std::cout << "\n" << divider << "\n";
	findMin(array, length, minValue, minIndex);
	findMax(array, length, maxValue, maxIndex);
	outputResult(array, length, minValue, minIndex, maxValue, maxIndex);
}

void fillArray(int array[], int length) {
	srand(time(NULL));
	for (int i = 0; i < length; i++) {
		array[i] = rand() % 101 - 50;
	}
}

void findMin(int array[], int length, int& minValue, int& minIndex) {
	minValue = 0;
	minIndex = -1;
	for (int i = 0; i < length; i++) {
		if (array[i] > 0 && (minIndex == -1 || array[i] < minValue)) {
			minValue = array[i];
			minIndex = i;
		}
	}
}

void findMax(int array[], int length, int& maxValue, int& maxIndex) {
	maxValue = array[0];
	maxIndex = 0;
	for (int i = 0; i < length; i++) {
		if (array[i] > maxValue) {
			maxValue = array[i];
			maxIndex = i;
		}
	}
}

void outputResult(int array[], int length, int minValue, int minIndex, int maxValue, int maxIndex) {
	if (minIndex == -1) {
		std::cout << "Значень більше нуля немає";
	} else {
		std::cout << "Найменше  додатнє число: array[" << minIndex << "] = " << minValue << "\n";
		std::cout << "Найбільше додатнє число: array[" << maxIndex << "] = " << maxValue << "\n";
		std::cout << "Зміна їх місцями: \n";
		int tmp = array[minIndex];
		array[minIndex] = array[maxIndex];
		array[maxIndex] = tmp;
		printArray(array, length);
	}
}

void printArray(int array[], int length) {
	for (int i = 0; i < length; i++) {
		if (i > 0) std::cout << ", ";
		std::cout << array[i];
	}
}