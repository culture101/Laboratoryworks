// exs_A1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");
    int n, sum = 0;
    cin >> n;
    if (n > 100) {
    }
    else {
        for (int i = 1; i <= n; ++i) {
            sum += i*i;
        }
        cout<< sum;
    }
}

