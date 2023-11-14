// exs_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>

int main()
{
    // Вводим размеры массива
    int n, m;    
    cin >> n;
    cin >> m;
    int A[50][50];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || j == 0) {
                A[i][j] = 1;
            }
            else {
                A[i][j] = A[i - 1][j] + A[i][j - 1];
            }
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

