/*Программа, в которой Функция get_angle() принимает три числа - длины трех сторон треугольника
и возвращает значение угла (в градусах), расположенного напротив первой стороны.*/

#include <iostream>
#include <math.h>
using namespace std;

float get_angle(float A, float B, float C)
{
    if (A <= 0 || B <= 0 || C <= 0){ // проверка на корректность введённых значений
        cout << "Длина стороны треугольника не может быть отрицательной" << endl;
    }

    else
    {
        double pi = 3.1415926;
        double gradus;
        double cosA = (B * B + C * C - A * A)/(2 * A * B); // теорема косинусов
        gradus = acos(cosA) * 180/pi;

        return gradus;
    }
}

int main()
{
    setlocale(0, "Rus");

    float A, B, C;
    cout << "Введите сторону А треугольника: " << endl;
    cin >> A;
    cout << "Введите сторону B треугольника: " << endl;
    cin >> B;
    cout << "Введите сторону C треугольника: " << endl;
    cin >> C;
    cout << "Угол, расположенный напротив стороны А, равен " << get_angle(A,B,C) << " градусов" << endl;

    return 0;
}

