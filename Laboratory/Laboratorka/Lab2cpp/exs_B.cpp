// exs_B.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");
    int vis_god;
    cin >> vis_god;
    if (vis_god % 4 == 0) { cout << "YES"; }
    else cout << "NO";
}

