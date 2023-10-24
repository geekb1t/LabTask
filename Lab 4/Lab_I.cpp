#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N; // Вводим количество элементов в массиве

    int arr[25]; // Создаем массив с максимальной длиной 35

    for (int i = 0; i < N; ++i) {
        cin >> arr[i]; // Вводим элементы массива
    }

    // Сохраняем последний элемент
    int last = arr[N - 1];

    // Сдвигаем элементы вправо
    for (int i = N - 1; i > 0; --i) {
        arr[i] = arr[i - 1];
    }

    // Первому элементу присваиваем значение последнего элемента
    arr[0] = last;

    // Выводим массив после сдвига элементов
    for (int i = 0; i < N; ++i) {
        cout << arr[i];
        if (i < N - 1) {
            cout << " ";
        }
    }

    return 0;
}