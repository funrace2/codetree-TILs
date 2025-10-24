#include <iostream>

using namespace std;

int N;

void Rectangle(int a) {
    int b = 1;

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if (b < 9) {
                cout << b << ' ';
                b++;
            }
            else { cout << b << ' '; b = 1; }
        }
        cout << endl;
    }
}

int main() {
    cin >> N;

    Rectangle(N);

    return 0;
}