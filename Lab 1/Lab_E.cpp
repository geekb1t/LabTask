#include <iostream>
using namespace std;
int main() {
    int v, t, r = 109;
    cin >> v;
    cin >> t;

    int position = (v * t % r + r) % r;

    cout << position << endl;

    return 0;
}