#include <iostream>
using namespace std;

int main() {
    char a, c, e;
    int b, d, f;
    cin >> a >> b;
    cin >> c >> d;
    cin >> e >> f;
    if ((a == 'Y' && b>=37) && (c == 'Y' && d>=37) && (e == 'Y' && f>=37)) {
        cout << "E";
    }
    else if (a == 'Y' && b>=37) {
        if ((e == 'Y' && f>=37) || (c == 'Y' && d>=37)) {
            cout << "E";
        }
        else {
            cout << "N";
        }
    }
    else if (e == 'Y' && f>=37) {
        if ((a == 'Y' && b>=37) || (c == 'Y' && d>=37)) {
            cout << "E";
        }
        else {
            cout << "N";
        }
    }
    else if (c == 'Y' && d>=37) {
        if ((a == 'Y' && b>=37) || (e == 'Y' && f>=37)) {
            cout << "E";
        }
        else {
            cout << "N";
        }
    }
    else {
        cout << "N";
    }
    return 0;
}