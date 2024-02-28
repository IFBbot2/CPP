/* Программа, показывающая работу
простых арифметических операторов*/
#include <iostream>
int main()
{
    setlocale (0, "Rus");
    unsigned int a; // целочисленное без знака
    double b; // с плавающей точкой с двойной точностью
    float c;  // с плавающей точкой со знаком
    long int d; // длинное целочисленное
    std::cout << "Введите a: ";
    std::cin >> a;
    std::cout << "Введите b: ";
    std::cin >> b;
    std::cout << "Введите c: ";
    std::cin >> c;
    std::cout << "Введите d: ";
    std::cin >> d;
    std::cout << a + b << "\n"; // сумма переменных
    std::cout << b - c << "\n"; // разность
    std::cout << c * d << "\n"; // произведение
    std::cout << d / a << "\n"; // деление
    std::cout << "Конец программы";
    return 0;
}
