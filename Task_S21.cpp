/*���������, ������� �������� �� ������������ ��� ����� �, � (�>A).
��� �������� ������ �� � �� �, ������� �������� ������� �����,
 ����������� �� 3 � ���� �output�*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    setlocale(0, "RUS");
    int A, B, result;
    cout << "������� A: "; // ����������� 2 �����
    cin >> A;
    cout << "������� B (B > A): ";
    cin >> B;

    ofstream file_to_write;
    file_to_write.open("output.txt"); // ������� ��������� ������
    for (A; A <= B; ++A) {
        result = A * 3; // ������� ������ �����, ���������� �� 3
        file_to_write << result << endl; // � ���������� �� � ������
    }
    file_to_write.close(); // ��������� ������

    return 0;
}
