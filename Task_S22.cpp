/*���������, ������� ���������� ���� � ������ ������ ����� �� ����� �output�
� ������� �� �� ����� � ����: �n. �����, ��� n - ���������� ����� ����� � �����*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    setlocale(0, "Rus");
    string text;
    int n = 1;
    ifstream file_to_write; // ������ � �������
    file_to_write.open("output.txt"); // ��������� ������
    while (file_to_write >> text){ // ���� � ������� ���-�� ����
        cout << n << ". " << text << endl; // ������� n. ���� � �����
        n++; // ���� ��������� � ����������� ���� n
    }
    file_to_write.close(); // ��������� ������
    return 0;
}

