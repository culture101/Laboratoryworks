// exs_R.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>

int main()
{       
    int k, m, n;cin >> k >> m >> n;
    int res;
    if (k >= n) {
        res = 2 * m;
        }
    else if (k < n && n % k != 0 && (n % k) * 2 != k) {
        res = (2 * n / k + 1) * m;
        }
    else if (k < n && n % k != 0 && (n % k) * 2 == k) {
        res = (2 * n / k) * m;
        }
    else if (k < n && n % k == 0) {
        res = (2 * n / k) * m;
        }
        cout << res << endl;
        return 0;

}
