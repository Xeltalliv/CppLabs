// Lab1.cpp

#include <iostream>

#define PI 3.141592653589793

//������ 8: ��������� ��'��� ������� � ������, �� ����� �������� ������ � ����� ��������� �����
int main() {

    double height, radius, cillinderVolume, coneVolume;

    //�������� ������
    std::cout << "Enter the height of the shape: ";
    std::cin >> height;
    std::cout << "\nEnter the radius of the shape: ";
    std::cin >> radius;

    //���������� ��'��� �����
    cillinderVolume = radius * PI * height;
    coneVolume = 1.0 / 3.0 * PI * radius * radius * height;

    //��������� ����������
    std::cout << "\nThe volume of the shape: " << cillinderVolume;
    std::cout << "\nThe volume of the shape: " << coneVolume << "\n";
    system("pause");
}
