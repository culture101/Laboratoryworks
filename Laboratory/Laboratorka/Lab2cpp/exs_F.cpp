// exs_F.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a > b && a > c) { cout  << a; }
    if (b > a && b > c) { cout  << b; }
    if (c > b && c > a) { cout  << c; }
}

