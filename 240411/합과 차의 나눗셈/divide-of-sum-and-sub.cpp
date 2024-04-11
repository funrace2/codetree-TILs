#include <iostream>
using namespace std;

int main() {
    int a, b;
    double c, d;
    cin >> a >> b;
    c = a + b;
    d = a - b;
    cout << fixed;
    cout.precision(2);
    cout << c / d;

    return 0;
}