#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int horse1, horse2, fig1, fig2;
    // номер строки и номер столбца
    cin >> horse1 >> horse2;
    cin >> fig1 >> fig2;
    int rowDiff = abs(horse1 - fig1);
    int collDiff = abs(horse2 - fig2);
    if ((rowDiff == 2 && collDiff == 1) || (rowDiff == 1 && collDiff == 2)) {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}