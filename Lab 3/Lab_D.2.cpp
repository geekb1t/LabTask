#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;

    while (N > 0) {
        int bit = N % 2;
        cout << bit;
        N /= 2;
    }

    cout << endl;

    return 0;
}