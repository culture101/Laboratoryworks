// exs_G.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>
#include <vector>
int main()
{
    setlocale(LC_ALL, "RU");
    int N;
    cin >> N;
    vector<int> arr(N); // Используем вектор вместо стандартного массива
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < N / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[N - 1 - i];
        arr[N - 1 - i] = temp;
    }
    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
}

