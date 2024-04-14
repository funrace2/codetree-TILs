#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    if (a>c) {
        cout << "A";
    }
    else if (a<c) {
        cout << "B";
    }
    else if (b>d) {
        cout << "A";
    }
    else if (b<d) {
        cout << "B";
    }
    return 0;
}