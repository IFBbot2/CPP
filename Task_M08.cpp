/*���������, � ������� ������� get_angle() ��������� ��� ����� - ����� ���� ������ ������������
� ���������� �������� ���� (� ��������), �������������� �������� ������ �������.*/

#include <iostream>
#include <math.h>
using namespace std;

float get_angle(float A, float B, float C)
{
    if (A <= 0 || B <= 0 || C <= 0){ // �������� �� ������������ �������� ��������
        cout << "����� ������� ������������ �� ����� ���� �������������" << endl;
    }

    else
    {
        double pi = 3.1415926;
        double gradus;
        double cosA = (B * B + C * C - A * A)/(2 * A * B); // ������� ���������
        gradus = acos(cosA) * 180/pi;

        return gradus;
    }
}

int main()
{
    setlocale(0, "Rus");

    float A, B, C;
    cout << "������� ������� � ������������: " << endl;
    cin >> A;
    cout << "������� ������� B ������������: " << endl;
    cin >> B;
    cout << "������� ������� C ������������: " << endl;
    cin >> C;
    cout << "����, ������������� �������� ������� �, ����� " << get_angle(A,B,C) << " ��������" << endl;

    return 0;
}

