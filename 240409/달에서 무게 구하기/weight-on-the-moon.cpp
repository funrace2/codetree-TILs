#include <iostream>
using namespace std;

int main() {
    cout << fixed;

    int a = 13;
    double g = 0.165;

    cout.precision(6);
    cout << a << " * " << g << " = " << a * g;

    return 0;
}