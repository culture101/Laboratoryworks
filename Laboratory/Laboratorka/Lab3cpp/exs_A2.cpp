// exs_A2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    using namespace std;
    int N;
    cin >> N;
    int i = 1;
    int result;
    while ((result = i * i) < N) {
        cout << i  << result << endl;
        ++i;
    }
    return 0;
}

