// exs_A3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>
int SumOfDigits(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}
int main()
{
    setlocale(LC_ALL, "RU");
    int N;
    cout << endl;
    cin >> N;
    int result = SumOfDigits(N);
    cout << result << endl;

    return 0;
}

