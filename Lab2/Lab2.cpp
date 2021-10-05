// Lab1.cpp

#include <iostream>
#include <Windows.h>

//Задача 8: Задані дійсні числа A, B, C. З'ясувати, чи існує серед них хоча б одна пара, що дає у сумі парне число
int main() {
    SetConsoleOutputCP(CP_UTF8);
    //setvbuf(stdout, nullptr, _IOFBF, 1000);

    double a, b, c;

    //введення данних
    std::cout << "Введіть A: ";
    std::cin >> a;
    std::cout << "Введіть B: ";
    std::cin >> b;
    std::cout << "Введіть C: ";
    std::cin >> c;

    //перевірка
    bool res;
    if (fmod(a + b, 2) == 0) {
        res = true;
    } else if (fmod(b + c, 2) == 0) {
        res = true;
    } else if (fmod(a + c, 2) == 0) {
        res = true;
    } else {
        res = false;
    }

    //виведення результатів
    std::cout << (res ? "\nЄ\n" : "\nНемає\n");
    system("pause");
}