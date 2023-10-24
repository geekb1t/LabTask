#include <iostream>
using namespace std;
int main() {
    int k, m, n;
    cin >> k >> m >> n;

    // Общее время для поджаривания k котлет с обеих сторон
    int time_double = 2 * m;

    // Общее время для поджаривания n котлет с обеих сторон
    int result;

    if (n % k == 0) {
        result = (n / k) * time_double;
    }
    else {
        result = ((n / k) + 1) * time_double;
    }

    cout << result << endl;

    return 0;
}