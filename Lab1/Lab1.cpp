// Lab1.cpp

#include <iostream>
#include <Windows.h>

#define PI 3.141592653589793

//Задача 8: Обчислити об'єми циліндра і конуса, що мають однакову висоту і мають однаковий радіус
int main() {
    SetConsoleOutputCP(CP_UTF8);
    //setvbuf(stdout, nullptr, _IOFBF, 1000);

    double height, radius, cillinderVolume, coneVolume;

    //введення данних
    std::cout << "Введіть висоту фігур: ";
    std::cin >> height;
    std::cout << "Введіть радіус фігур: ";
    std::cin >> radius;

    //обчислення об'ємів фігур
    cillinderVolume = radius * PI * height;
    coneVolume = 1.0 / 3.0 * PI * radius * radius * height;

    //виведення результатів
    std::cout << "\nОб'ем циліндра: " << cillinderVolume;
    std::cout << "\nОб'ем конуса: " << coneVolume << "\n";
    system("pause");
}
