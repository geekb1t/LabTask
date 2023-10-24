#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int queen1, queen2, fig1, fig2;
    // номер строки и номер столбца
    cin >> queen1 >> queen2;
    cin >> fig1 >> fig2;
    if (queen1 == fig1 || queen2 == fig2 || abs(queen1 - fig1) == abs(queen2-fig2)) {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}