#include <iostream>

using namespace std;
int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x = i * i;
        sum += x;
    }
    cout << sum;

    return 0;
}