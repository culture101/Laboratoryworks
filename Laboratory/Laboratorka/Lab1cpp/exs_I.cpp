// exs_I.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");
    int a;
    cin >> a;
    if (a >= 100 && a <= 999) 
        cout  << a;
    int figure1, figure2, figure3;
    figure1 = a / 100;
    figure2 = (a / 10) % 10;
    figure3 = a % 10;
    int sum = figure1 + figure2 + figure3;
    cout  << sum;
}
