// exs_E.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");
    int v, t, distance;
    cin >> v;
    cin >> t;
    distance = (v * t) % 109;
    distance = (distance + 109) % 109;

    cout << distance;

}


