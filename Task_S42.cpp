/*Программа, в которой функция sort() принимает массив из 10 чисел и сортирует их по убыванию*/

#include <iostream>
#include <cstdlib>
using namespace std;

float sort(int nums[], int size = 10)
{
    for (int t = 0; t < size; t++){
        nums[t] = rand(); // даем элементам массива случайные начальные значения
    }
    cout << "Исходный массив: \n"; // выводим на экран исходный массив
    for (int t = 0; t < size; t++){
    cout << nums[t] << ' ';
    }
    cout << endl;
    // Пузырьковое упорядочение
    for (int a = 1; a < size; a++){
        for (int b = size - 1; b >= a; b--){
            if(nums[b - 1] < nums[b]){ // если не в том порядке
            // элементы обмениваются местами
            int t = nums[b - 1];
            nums[b - 1] = nums[b];
            nums[b] = t;
            }
        }
    }
    cout << "Упорядоченный массив: \n";
    for (int t = 0; t < size; t++) {
        cout << nums[t] << ' ';
    }
}



int main()
{
    setlocale(0, "RUS");
    int size;
    size = 10; //Число упорядоченных элементов
    int nums[size];
    sort(nums);
    return 0;
}
