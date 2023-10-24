#include <iostream>
using namespace std;
int main() {
    int lad1, lad2, fig1, fig2;
    // номер строки и номер столбца
    cin >> lad1 >> lad2;
    cin >> fig1 >> fig2;
    if (lad1 == fig1 || lad2 == fig2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}