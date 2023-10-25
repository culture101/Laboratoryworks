// exs_K.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);
    if ((dx == 1 && dy == 2) || (dx == 2 && dy == 1)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
