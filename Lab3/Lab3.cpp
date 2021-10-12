// Lab3.cpp

#include <iostream>
#include <Windows.h>
#include <math.h>

//Задача 8: Із заданою точністю Eps обчислити значення функції Cos X
int main() {
    SetConsoleOutputCP(CP_UTF8);
    //setvbuf(stdout, nullptr, _IOFBF, 1000);

    //введення данних
    double x, eps;
    std::cout << "Задача: Знайти cos(x) з точністю eps\n";
    std::cout << "Введіть x: ";
    std::cin >> x;
    std::cout << "Введіть eps: ";
    std::cin >> eps;

    double add = 1, summ = 0, i = 0;
    while (abs(add) > eps) {
        i += 2;
        summ += add;
        printf("Додано %17.14f\n", add);
        add *= (-x * x) / ((i - 1) * i);
    }

    //виведення результату
    std::cout << "======================\n";
    printf("Резуьтат:  %17.14f\n", summ);
    system("pause");
}