#include <iostream>

using namespace std;

int n, m;

void Rectangle(int a, int b) {
    for (int i = 0; i<a; i++) {
        for (int j = 0; j<b; j++) {
            cout << "1";
        }
        cout << endl;
    }
}

int main() {
    cin >> n >> m;

    Rectangle(n, m);

    return 0;
}