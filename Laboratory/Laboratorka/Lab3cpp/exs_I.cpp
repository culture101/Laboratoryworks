// exs_I.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>

int main()
{
    int A;
    cin >> A;
    int fib1 = 0, fib2 = 1, fib_sum = 1, n = 1;
    while (fib_sum < A) {
        fib_sum = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib_sum;
        ++n;
    }

    if (fib_sum == A) {
        cout << n << endl;
    }
    else {
        cout << "-1" << endl;
    }
}