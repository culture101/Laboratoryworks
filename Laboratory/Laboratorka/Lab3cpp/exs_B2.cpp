// exs_B2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>
int NumberOfZeroes(int n) {
    int count = 0;

    while (n > 0) {
        if (n % 10 == 0) {
            count++;
        }
        n /= 10;
    }

    return count;
}
int main()
{
    setlocale(LC_ALL, "RU");

    int N;
    cout  << endl;
    cin >> N;
    int result = NumberOfZeroes(N);
    cout  << result << endl;

    return 0;
        
}
