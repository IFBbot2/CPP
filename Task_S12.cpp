/*���������, ������������ ������� � 1 �� 1000
� ����� 4 � ����� ���� �����, �������
������� �� 7 ��� ������� */

#include <iostream>
using namespace std;
int main()
{
    int a;
    for (a = 1; a <= 1000; a+4){
        cout << a << " "; // ������� ��� �����
        if (a / 7)
            cout << sum (a);
    }
        return 0;
}
