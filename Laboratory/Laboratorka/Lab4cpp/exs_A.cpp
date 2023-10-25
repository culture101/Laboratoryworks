// exs_A.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>
#include <vector>
int main()
{
    setlocale(LC_ALL, "RU");
    // Запрашиваем размер массива
    int N;
    cin >> N;
    // Запрашиваем элементы массива
    vector<int> array(N);
    for (int i = 0; i < N; ++i) {
        cin >> array[i];
    }
    // Выводим элементы с четными номерами
    for (int i = 0; i < N; i += 2) {
        cout << array[i] << " ";
    }

}

