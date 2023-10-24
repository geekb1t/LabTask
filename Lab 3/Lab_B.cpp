#include <iostream>
using namespace std;
int NumberOfZeroes(int n) {
    int count = 0;

    while (n > 0) {
        int digit = n % 10;  // Получаем последнюю цифру числа
        if (digit == 0) {
            count++;  // Если цифра равна 0, увеличиваем счетчик
        }
        n /= 10;  // Удаляем последнюю цифру числа
    }

    return count;
}

int main() {
    int N;
    cin >> N;

    int result = NumberOfZeroes(N);
    cout << result << endl;

    return 0;
}