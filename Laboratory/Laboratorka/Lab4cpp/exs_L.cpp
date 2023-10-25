// exs_L.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");
    int N;
    cin >> N;
    const int MAX_N = 10000;
    if (N < 1 || N > MAX_N) {
        return 1;
    }
    int arr[MAX_N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    int lastElement = arr[N - 1];
    for (int i = N - 1; i > 0; --i) {
        arr[i] = arr[i - 1];
    }
    arr[0] = lastElement;
    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
}

