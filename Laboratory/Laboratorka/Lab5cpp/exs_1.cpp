// exs_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    int n;
    cin >> n;
    int arr[50][50];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j == n - 1) {
                arr[i][j] = 1;
            }
            else if (i + j < n - 1) {
                arr[i][j] = 0;
            }
            else {
                arr[i][j] = 2;
            }
        }
    }

    //cout << "Массив:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

