#include <iostream>
using namespace std;
int main() {
    int x, x1, x2, x3;
    cin >> x;
    x1 = x / 100;
    x2 = (x / 10) % 10;
    x3 = x % 10;
    int sum = x1 + x2 + x3;
    cout << sum;
}