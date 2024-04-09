#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    double a = 5.26, b = 8.27;
    cout.precision(3);
    cout << a * b;
    return 0;
}