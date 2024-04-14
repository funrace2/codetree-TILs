#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 2) {
        cout << 28;
    }
    else if ((n<=7 && n%2!=0) || (n>=8 && n%2==0)) {
        cout << 31;
    }
    else {
        cout << 30;
    }
    return 0;
}