#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    if (a==0) {
        if (b>=19) {
            cout << "MAN";
        }
        else {
            cout << "BOY";
        }
    }
    else if (a==1) {
        if(b>=19) {
            cout << "WOMAN";
        }
        else {
            cout << "GIRL";
        }
    }
    return 0;
}