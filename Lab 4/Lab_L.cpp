#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // Вводим количество учеников

    int heights[100]; // Создаем массив для хранения роста учеников

    for (int i = 0; i < N; ++i) {
        cin >> heights[i]; // Вводим рост учеников
    }

    int Petya_height;
    cin >> Petya_height; // Вводим рост Пети

    int position = 1; // Инициализируем позицию Пети

    // Находим позицию, на которой Петя должен встать
    while (position <= N && heights[position - 1] >= Petya_height) {
        position++;
    }

    cout << position << endl; // Выводим позицию Пети

    return 0;
}