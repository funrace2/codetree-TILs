#include <iostream>
using namespace std;

void PrintTenStars() {
    for (int i = 0; i < 10; i++) {
        cout << '*';
    }
}

int main() {
    for (int j = 0; j < 5; j++) {
        PrintTenStars();
        cout << endl;
    }
    return 0;
}