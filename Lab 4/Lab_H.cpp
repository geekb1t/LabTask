#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int arr[35];

    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < N - 1; i += 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    for (int i = 0; i < N; ++i) {
        cout << arr[i];
        if (i < N - 1) {
            cout << " ";
        }
    }
    return 0;
}