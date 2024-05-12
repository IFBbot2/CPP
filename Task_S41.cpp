/*Программа, в которой функция squared_sum()
принимает два дробных числа и возвращает квадрат их суммы*/

#include <iostream>
using namespace std;

double squared_sum(double a, double b)// прописываем функцию
{
    double sum = a + b; // ищем сумму
    double squred = sum * sum; // и ее квадрат
    return squred;
}

int main()
{
    setlocale(0, "Rus");
    double a, b;
    cout<< "Введите число a: "; // запрашиваем числа
    cin >> a;
    cout << "Введите число b: ";
    cin >> b;
    cout << squared_sum(a, b) << endl;
    return 0;
}
