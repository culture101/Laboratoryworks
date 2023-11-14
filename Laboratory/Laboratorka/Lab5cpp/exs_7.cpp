// exs_7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");
    int n, m;
    cin >> n;
    cin >> m;
    int arr[50][50];
    int value = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++) {
                arr[i][j] = value++;
            }
        }
        else {
            for (int j = m - 1; j >= 0; j--) {
                arr[i][j] = value++;
            }
            
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}

