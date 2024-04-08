#include <iostream>
using namespace std;

int main() {
    int b;
    cin >> b;
    for (int i = 1; i <= b; i++) {
            if (i%2 == 0 or i%3 == 0) {
                cout << 1 << " ";
            }
            else {
                cout << 0 << " ";
            }
    }
    return 0;
}