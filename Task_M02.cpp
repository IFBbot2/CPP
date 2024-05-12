/*Программа, которая принимает два параметра: сторону А и число сторон N,
и возвращает площадь N-угольника со стороной А.*/

#include <iostream>
#include <cmath>
using namespace std;

double square (double A, double N)
{
    double pi = 3.1415926;
    double square = (N * A * A* (cos(pi/N) / sin(pi/N))) / 4; //  формула площади правильного N-угольника
    return square;
}

int main()
{
    setlocale(0, "RUS");
    double A;
    int N;
    cout << "Введите сторону A: "; // запрашиваем 2 числа
    cin >> A;
    cout << "Введите число сторон N: ";
    cin >> N;
    square(A, N);
    cout << square(A, N) << endl;

    return 0;
}
