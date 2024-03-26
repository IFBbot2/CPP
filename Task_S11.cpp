/*Программа, выводящая числа
3, 6, 9, ..., 99*/
#include <iostream>
using namespace std;
int main()
{
    int a;
    for (a = 0; a <= 100; a ++){
        if (a % 3 == 0)
            cout << a << " "; // выводим все числа
    }
        return 0;
}
