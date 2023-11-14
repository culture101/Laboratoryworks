// exs_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>
//#include <ctime> 

int main()
{
    setlocale(LC_ALL, "RU");
    int n;
    cin >> n;
    //srand(time(0));
    int arr[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 10;  //Задаю диапазон от [0,9]
        }
    }
    bool symetric = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] != arr[j][i]) {
                symetric = false;
                break; //Выход из цикла
            }
        }
        if (!symetric) { break; }
    }
    //ВЫВОЖУ МАССИВ ДЛЯ ЧИТАЕМОСТИ
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    //Вывод результата
    if (symetric) { cout << "yes\n"; }
    else { cout << "no\n"; }
}

