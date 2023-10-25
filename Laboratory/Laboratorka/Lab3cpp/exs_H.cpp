// exs_H.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");
    short int N;
    cin >> N;
    int result = 0;
    if (N <= 30) {
        for (int i = 0; i <= N; ++i) {
            result += 1 << i;
        }
        cout  << result;
    }
   
}

