/*Программа, в которой пользователь вводит строку и, используя указатель на строку,
сдвигает каждую букву в строке на 1*/

#include <iostream>
#include <cstdio> // для gets()
#include <cstring>

using namespace std;

void func(char *pointer){
    while (*pointer != '\0') {
        if ((*pointer >= 'a' && *pointer <= 'z')) { // если символ находится в диапазоне от a до z
            *pointer = 'a' + (*pointer - 'a' + 1) % 26; // символ вперед
        } else if ((*pointer >= 'A' && *pointer <= 'Z')){ // аналогично с заглавными буквами
            *pointer = 'A' + (*pointer - 'A' + 1) % 26;
        }
        pointer++;
    }
}

int main(){
    setlocale (0, "RUS");
    char str[100];
    cout << "Введите строку: "; // запрашиваем строку
    gets(str); // ввод строки с помощью функции gets()
    func(str); // вызываем функцию func
    cout << "Сдвинутая строка: " << str << endl;

    return 0;
}
