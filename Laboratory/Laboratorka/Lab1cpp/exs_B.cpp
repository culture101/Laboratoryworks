// exs_B.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");
    int number;
    cin >> number;
    cout << "The next number for the number " << number << " is " << number + 1 << "." << endl;
    cout << "The previous number for the number " << number << " is " << number - 1 << "." << endl;

    return 0;
}
