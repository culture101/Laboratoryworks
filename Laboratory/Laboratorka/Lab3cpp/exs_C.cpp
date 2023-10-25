#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    using namespace std;
    int N;
    cin >> N;
    if (N < 0 || N > 30) {
    }

    int result = 1;
    int power = 0;

    while (power < N) {
        result *= 2;
        power++;
    }
    cout << result;
}
