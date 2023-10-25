// exs_H.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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

    for (int i = 0; i < N - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }

}
