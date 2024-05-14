/*���������, � ������� ������� reverse() ��������� ������ � ������� �� �� ����� � ���������� ����*/

#include <iostream>
#include <cstring>
#include <cstdio> // ��� gets()
using namespace std;

void reverse(char str[100])
 {
    int len = strlen(str);
    char *end;
    char *start = str;
    end = &str[len-1];

    while (start < end){
        // �������� �������
        char t = *start;
        *start = *end;
        *end = t;
        start++;
        end--;
    }
    cout << "�����������: " << str << endl;
 }

int main()
{
    setlocale(0, "RUS");

    char str[100];
    cout << "������� ������: " << endl; // ������ ������
    gets(str); // ���� ������ � ������� ������� gets()
    cout << "��������: " << str << endl;
    reverse(str);

    return 0;
}
