// exs_D1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>
int main()
{
    setlocale(LC_ALL, "RU");
    short int n, k;
    cin >> n;
    cin >> k;
    int sum = 1;
    if (n <= 10 && k <= 10) {
    
        for (int i = 1; i <= k; ++i) {
            sum *= n--;
            sum /= i;
        }
        cout  << sum;
    }

}

