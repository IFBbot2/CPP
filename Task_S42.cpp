/*���������, � ������� ������� sort() ��������� ������ �� 10 ����� � ��������� �� �� ��������*/

#include <iostream>
#include <cstdlib>
using namespace std;

float sort(int nums[], int size = 10)
{
    for (int t = 0; t < size; t++){
        nums[t] = rand(); // ���� ��������� ������� ��������� ��������� ��������
    }
    cout << "�������� ������: \n"; // ������� �� ����� �������� ������
    for (int t = 0; t < size; t++){
    cout << nums[t] << ' ';
    }
    cout << endl;
    // ����������� ������������
    for (int a = 1; a < size; a++){
        for (int b = size - 1; b >= a; b--){
            if(nums[b - 1] < nums[b]){ // ���� �� � ��� �������
            // �������� ������������ �������
            int t = nums[b - 1];
            nums[b - 1] = nums[b];
            nums[b] = t;
            }
        }
    }
    cout << "������������� ������: \n";
    for (int t = 0; t < size; t++) {
        cout << nums[t] << ' ';
    }
}



int main()
{
    setlocale(0, "RUS");
    int size;
    size = 10; //����� ������������� ���������
    int nums[size];
    sort(nums);
    return 0;
}
