#include <iostream>
using namespace std;

int main() {
    cout << fixed;

    double ft = 9.2, mi = 1.3;
    cout.precision(1);
    cout << ft << "ft = " << ft * 30.48 << "cm" << endl;
    cout << mi << "mi = " << mi * 160934 << "cm";
    return 0;
}