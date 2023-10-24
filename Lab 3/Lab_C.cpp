#include <iostream>

using namespace std;
int main() {
    int N;
    cin >> N;
    int x = 1;
    for (int i = 0; i < N; i++)
    {
        x *= 2;
    }
    cout << x;
    return 0;
}