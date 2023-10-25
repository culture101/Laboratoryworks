// exs_G.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2, y2;
    if (x1 == x2 || y1 == y2) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

}

