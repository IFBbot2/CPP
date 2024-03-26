/*ѕрограмма, показывающа€ перебор с 1 до 1000
с шагом 4 и сумму всех чисел, которые
дел€тс€ на 7 без остатка */

#include <iostream>
using namespace std;
int main()
{
    int a;
    for (a = 1; a <= 1000; a+4){
        cout << a << " "; // выводим все числа
        if (a / 7)
            cout << sum (a);
    }
        return 0;
}
