// exs_M.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>

int main()
{   
    setlocale(LC_ALL, "RU");
    int k;
    cin >> k;
    if (k == 1 || k % 4 == 0)
        cout << "YES";
    else
        cout << "NO";
    }

