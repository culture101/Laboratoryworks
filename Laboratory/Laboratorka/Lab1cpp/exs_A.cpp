@@ -0,0 +1,15 @@
﻿// exs_A.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "RU");
    int a, b, c;
    cin >> a;
    cin >> b;
    c = sqrt(pow(a, 2) + pow(b, 2));
    cout<< c;
}
