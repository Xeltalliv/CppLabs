// Lab4.cpp

#include <iostream>
#include <Windows.h>
#include <math.h>
#include <string>

//Задача: Обчислити 1 - 1/2 + 1/3 - 1/4 +1/5 ... + 1/99 - 1/100 послідовно зліва направо і навпаки, результати порівняти.
int main() {
	SetConsoleOutputCP(CP_UTF8);
	//setvbuf(stdout, nullptr, _IOFBF, 1000);

	std::cout << "Задача: Обчислити 1 - 1/2 + 1/3 - 1/4 +1/5 ... + 1/99 - 1/100 послідовно зліва направо і навпаки, результати порівняти.\n";
	std::string divider(119, '=');
	std::cout << divider << "\n";

	double sum1 = 0;
	double sign = 1;
	for (int add = 1; add < 101; add++) {
		sum1 += sign / add;
		sign = 0 - sign;
	}

	double sum2 = 0;
	sign = 1;
	for (double add = 100; add > 0; add--) {
		sum2 += sign / add;
		sign = 0 - sign;
	}

	//виведення результату
	printf("1 - 1/2 + 1/3 - 1/4 + 1/5  ... + 1/99 - 1/100 = %17.14f\n", sum1);
	printf("1/100 - 1/99 + 1/98 - 1/97 ... + 1/2  - 1     = %17.14f\n", sum2);

	system("pause");
}