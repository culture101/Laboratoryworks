// exs_C.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    int N, K;
    int D;
    cin >> N;
    cout << endl;
    cin >> K;
    D = K / N;
    cout<< D;
}

