// exs_D.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
using namespace std;
#include <iostream>
#include <vector>
int main()
{
    setlocale(LC_ALL, "RU");
    int N;
    //cout << "Введите размер массива: ";
    cin >> N;
    vector<int> array(N);
    //cout << "Введите элементы массива: ";
    for (int i = 0; i < N; ++i) {
        cin >> array[i];
    }
    //считают колво элементов больше предыдущих
    int count = 0;
    for (int i = 1; i < N; ++i) {
        if (array[i] > array[i - 1]) {
            count++;
        }
    }cout << count << endl;
    
}

