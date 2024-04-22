/*Программа, которая использует цикл и читает каждое число из файла «output»
и выводит их на экран в виде: «n. Число», где n - порядковый номер числа в файле»*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    setlocale(0, "Rus");
    string text;
    int n = 1;
    ifstream file_to_write; // читаем с файлика
    file_to_write.open("output.txt"); // открываем нужный
    while (file_to_write >> text){ // пока в файлике что-то есть
        cout << n << ". " << text << endl; // выводим n. наше и число
        n++; // ищем следующее и увеличиваем наше n
    }
    file_to_write.close(); // закрываем файлик
    return 0;
}

