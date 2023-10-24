#include <iostream>

using namespace std;
int main() {
    int N;
    cin >> N;
    int sum = 0;
    int power = 1;

    for (int i = 0; i <= N; i++) {
        sum += power;
        power *= 2;
    }

    cout << sum << endl;
    return 0;
}
