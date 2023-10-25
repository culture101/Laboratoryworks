// exs_D2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>
void ReverseBinaryRepresentation(int n) {
    while (n > 0) {
        cout << n % 2;
        n /= 2;
    }
}
int main()
{
    setlocale(LC_ALL, "RU");
    int N;
    cin >> N;
    ReverseBinaryRepresentation(N);

    return 0;
}