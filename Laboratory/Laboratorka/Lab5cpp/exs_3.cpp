// exs_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");
    int n, m;
    cin >> n;
    cin >> m;
    int arr[50][50];

    for (int i = 0; i < n * m; i++) {
        arr[i / m][i % m] = (i / m) * (i % m);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << ' ';
        }
            cout << '\n';
    }


}

