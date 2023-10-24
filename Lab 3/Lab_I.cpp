#include <iostream>
#include <iomanip>  // Для установки точности вывода

using namespace std;
int main() {
    int N;
    cin >> N;
    
    double result = 1.0;  
    double factorial = 1.0;

    for (int i = 1; i <= N; i++) {
        factorial *= i;  // Вычисляем i!
        result += 1.0 / factorial;
    }

    cout << fixed << setprecision(5) << result << endl;
    return 0;
}