#include <iostream>
using namespace std;
int SumOfDigits(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;  // Получаем последнюю цифру числа и добавляем её к сумме
        n /= 10;       // Удаляем последнюю цифру числа
    }

    return sum;
}

int main() {
    int N;
    cin >> N;

    int result = SumOfDigits(N);
    cout << result << endl;

    return 0;
}