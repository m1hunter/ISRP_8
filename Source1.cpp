#include <iostream>

int main() {
    setlocale(0, "");
    int a, b;

    std::cout << "������� ������ �����: ";
    std::cin >> a;

    std::cout << "������� ������ �����: ";
    std::cin >> b;

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;

    std::cout << "�����: " << sum << std::endl;
    std::cout << "��������: " << difference << std::endl;
    std::cout << "������������: " << product << std::endl;
    std::cout << "�������: " << quotient << std::endl;

    return 0;
}