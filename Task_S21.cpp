/*Программа, которая получает от пользователя два числа А, В (В>A).
Она проходит циклом от А до В, выводит значение каждого числа,
 умноженного на 3 в файл «output»*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    setlocale(0, "RUS");
    int A, B, result;
    cout << "Введите A: "; // запрашиваем 2 числа
    cin >> A;
    cout << "Введите B (B > A): ";
    cin >> B;

    ofstream file_to_write;
    file_to_write.open("output.txt"); // создаем текстовый файлик
    for (A; A <= B; ++A) {
        result = A * 3; // выводим циклом числа, умноженные на 3
        file_to_write << result << endl; // и записываем их в файлик
    }
    file_to_write.close(); // закрываем файлик

    return 0;
}
