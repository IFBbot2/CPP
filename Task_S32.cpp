/*ѕрограмма, в которой пользователь вводит строку и, использу€ указатель на строку,
сдвигает каждую букву в строке на 1*/

#include <iostream>
#include <cstdio> // дл€ gets()
#include <cstring>

using namespace std;

int main()
{
    setlocale (0, "RUS");
    char str[100], *pointer; // объ€вл€ем массив и указатель
    cout << "¬ведите строку: " << endl; // делаем запрос
    gets(str); // ввод строки с помощью функции gets()
    pointer = str;
    for (int i = 0; i < strlen(str); i ++) // вводим цикл - пока символ меньше нашего последнего символа строки
    {
        char number = pointer[i] + 1; // мы сдвигаем букву на 1, использу€ указатель на массив, и увеличиваем i
        cout << number;
    }

    return 0;
}
