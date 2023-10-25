// exs_V.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");
    double a, b, c;
    cin >> a >> b >> c;
    double D = b * b - 4 * a * c;
    if (D > 0) {
    double x1 = (-b + sqrt(D)) / (2 * a);
    double x2 = (-b - sqrt(D)) / (2 * a);
    cout << x1 << " " << x2 << endl;
    }
    else if (D == 0) {
        double x = -b / (2 * a);
        if (abs(x) < 1e-10) {
            x = 0.0;
        }
        cout << x << endl;
    }
}

