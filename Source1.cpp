#include <iostream>

int main() {
    setlocale(0, "");
    int a, b;

    std::cout << "Введите первое число: ";
    std::cin >> a;

    std::cout << "Введите второе число: ";
    std::cin >> b;

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;

    std::cout << "Сумма: " << sum << std::endl;
    std::cout << "Разность: " << difference << std::endl;
    std::cout << "Произведение: " << product << std::endl;
    std::cout << "Частное: " << quotient << std::endl;

    return 0;
}