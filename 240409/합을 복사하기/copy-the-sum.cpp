#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2, c = 3;
    int d = a + b + c;
    a = b = c = d;
    cout << a << " " << b << " " << c;
    return 0;
}