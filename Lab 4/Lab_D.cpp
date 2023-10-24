#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // Вводим количество элементов в массиве

    int count = 0; // Инициализируем счетчик

    if (N > 0) {
        int prev, current;
        cin >> prev; // Считываем первый элемент массива

        for (int i = 1; i < N; i++) {
            cin >> current; // Считываем следующий элемент массива

            if (current > prev) {
                count++; // Увеличиваем счетчик, если текущий элемент больше предыдущего
            }

            prev = current; // Обновляем значение предыдущего элемента
        }
    }

    cout << count << endl; // Выводим результат

    return 0;
}
