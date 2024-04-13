#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c;
    if (a<=b && a<=c) {
        d = a;
    }
    else if (b<=a && b<=c) {
        d = b;
    }
    else {
        d = c;
    }
    cout << (a == d) << " ";
    cout << (a==b && b==c && c==a);
    return 0;
}