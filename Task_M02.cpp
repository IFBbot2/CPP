/*Программа, которая принимает два параметра: сторону А и число сторон N,
и возвращает площадь N-угольника со стороной А.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "RUS");
    double A, square, pi;
    int N;
    cout << "Введите сторону A: "; // запрашиваем 2 числа
    cin >> A;
    cout << "Введите число сторон N: ";
    cin >> N;
    pi = 3.1415926;
    square = (N * A * A* (cos(pi/N) / sin(pi/N))) / 4; //  формула площади правильного N-угольника
    cout << square << endl;

    return 0;
}
