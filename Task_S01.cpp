/* ���������, ������������ ������
������� �������������� ����������*/
#include <iostream>
int main()
{
    setlocale (0, "Rus");
    unsigned int a; // ������������� ��� �����
    double b; // � ��������� ������ � ������� ���������
    float c;  // � ��������� ������ �� ������
    long int d; // ������� �������������
    std::cout << "������� a: ";
    std::cin >> a;
    std::cout << "������� b: ";
    std::cin >> b;
    std::cout << "������� c: ";
    std::cin >> c;
    std::cout << "������� d: ";
    std::cin >> d;
    std::cout << a + b << "\n"; // ����� ����������
    std::cout << b - c << "\n"; // ��������
    std::cout << c * d << "\n"; // ������������
    std::cout << d / a << "\n"; // �������
    std::cout << "����� ���������";
    return 0;
}
