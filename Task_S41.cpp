/*���������, � ������� ������� squared_sum()
��������� ��� ������� ����� � ���������� ������� �� �����*/

#include <iostream>
using namespace std;

double squared_sum(double a, double b)// ����������� �������
{
    double sum = a + b; // ���� �����
    double squred = sum * sum; // � �� �������
    return squred;
}

int main()
{
    setlocale(0, "Rus");
    double a, b;
    cout<< "������� ����� a: "; // ����������� �����
    cin >> a;
    cout << "������� ����� b: ";
    cin >> b;
    cout << squared_sum(a, b) << endl;
    return 0;
}
