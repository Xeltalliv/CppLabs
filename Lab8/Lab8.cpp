// Lab8.cpp

#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <string>
#include <stdlib.h>

const int size = 10; //Працюе і з парними, і з непарними розмірами

void fillMatrix(int[size][size]);
void displayMatrix(int[size][size]);
void scanMatrix(int[size][size], int*, int*);

int main() {
	SetConsoleOutputCP(CP_UTF8);
	//setvbuf(stdout, nullptr, _IOFBF, 1000);

	//виведення умови
	std::cout << "Задача: Знайти максимальний елемент і сумму всіх елементів у матриті у квадраті у центрі матриці, що повернут на \n45 градусів.\n";
	std::string divider(119, '=');
	std::cout << divider << "\n";

	//встановлення початкових данних
	int matrix[size][size];
	int max, total = 0;

	//обробка і виведення данних
	fillMatrix(matrix);
	std::cout << "Матриця:\n";
	displayMatrix(matrix);
	std::cout << divider << "\n";
	std::cout << "Обробка:\n";
	scanMatrix(matrix, &max, &total);
	std::cout << divider << "\n";
	std::cout << "Максимум: " << std::setw(6) << max << "\n";
	std::cout << "Сума:     " << std::setw(6) << total << "\n";
}

void fillMatrix(int matrix[size][size]) {
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			matrix[i][j] = rand() % 101 - 50;
		}
	}
}

void displayMatrix(int matrix[size][size]) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			std::cout << std::setw(4) << matrix[i][j];
		}
		std::cout << "\n";
	}
}



void scanMatrix(int matrix[size][size], int *max, int *total) {
	int doubleSize = size << 1;
	int center = size - 1;
	for (int i = 0; i < doubleSize; i+=2) {
		for (int j = 0; j < doubleSize; j+=2) {
			if (abs(i-center)+abs(j-center) < center + 2) {
				int elem = matrix[i >> 1][j >> 1];
				if (elem > *max) *max = elem;
				*total += elem;
				std::cout << std::setw(4) << elem;
			} else {
				std::cout << "   `";
			}
		}
		std::cout << "\n";
	}
}