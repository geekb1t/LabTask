#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a;
    cin >> b;

    cout << (a % b) * (b % a) + 1;
    return 0;
}