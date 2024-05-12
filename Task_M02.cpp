/*���������, ������� ��������� ��� ���������: ������� � � ����� ������ N,
� ���������� ������� N-��������� �� �������� �.*/

#include <iostream>
#include <cmath>
using namespace std;

double square (double A, double N)
{
    double pi = 3.1415926;
    double square = (N * A * A* (cos(pi/N) / sin(pi/N))) / 4; //  ������� ������� ����������� N-���������
    return square;
}

int main()
{
    setlocale(0, "RUS");
    double A;
    int N;
    cout << "������� ������� A: "; // ����������� 2 �����
    cin >> A;
    cout << "������� ����� ������ N: ";
    cin >> N;
    square(A, N);
    cout << square(A, N) << endl;

    return 0;
}
