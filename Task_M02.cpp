/*���������, ������� ��������� ��� ���������: ������� � � ����� ������ N,
� ���������� ������� N-��������� �� �������� �.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "RUS");
    double A, square, pi;
    int N;
    cout << "������� ������� A: "; // ����������� 2 �����
    cin >> A;
    cout << "������� ����� ������ N: ";
    cin >> N;
    pi = 3.1415926;
    square = (N * A * A* (cos(pi/N) / sin(pi/N))) / 4; //  ������� ������� ����������� N-���������
    cout << square << endl;

    return 0;
}
