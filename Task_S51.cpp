/*Программа, в которой функция reverse() принимает строку и выводит ее на экран в отраженном виде*/

#include <iostream>
#include <cstring>
#include <cstdio> // для gets()
using namespace std;

void reverse(char str[100])
 {
    int len = strlen(str);
    char *end;
    char *start = str;
    end = &str[len-1];

    while (start < end){
        // обменяем символы
        char t = *start;
        *start = *end;
        *end = t;
        start++;
        end--;
    }
    cout << "Перевёрнутая: " << str << endl;
 }

int main()
{
    setlocale(0, "RUS");

    char str[100];
    cout << "Введите строку: " << endl; // делаем запрос
    gets(str); // ввод строки с помощью функции gets()
    cout << "Исходная: " << str << endl;
    reverse(str);

    return 0;
}
