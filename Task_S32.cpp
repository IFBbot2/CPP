/*���������, � ������� ������������ ������ ������ �, ��������� ��������� �� ������,
�������� ������ ����� � ������ �� 1*/

#include <iostream>
#include <cstdio> // ��� gets()
#include <cstring>

using namespace std;

int main()
{
    setlocale (0, "RUS");
    char str[100], *pointer; // ��������� ������ � ���������
    cout << "������� ������: " << endl; // ������ ������
    gets(str); // ���� ������ � ������� ������� gets()
    pointer = str;
    for (int i = 0; i < strlen(str); i ++) // ������ ���� - ���� ������ ������ ������ ���������� ������� ������
    {
        char number = pointer[i] + 1; // �� �������� ����� �� 1, ��������� ��������� �� ������, � ����������� i
        cout << number;
    }

    return 0;
}
