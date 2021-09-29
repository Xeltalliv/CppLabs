// Lab1.cpp

#include <iostream>

#define PI 3.141592653589793

//Задача 8: Обчислити об'єми циліндра і конуса, що мають однакову висоту і мають однаковий радіус
int main() {

    double height, radius, cillinderVolume, coneVolume;

    //введення данних
    std::cout << "Enter the height of the shape: ";
    std::cin >> height;
    std::cout << "\nEnter the radius of the shape: ";
    std::cin >> radius;

    //обчислення об'ємів фігур
    cillinderVolume = radius * PI * height;
    coneVolume = 1.0 / 3.0 * PI * radius * radius * height;

    //виведення результатів
    std::cout << "\nThe volume of the shape: " << cillinderVolume;
    std::cout << "\nThe volume of the shape: " << coneVolume << "\n";
    system("pause");
}
