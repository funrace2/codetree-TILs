#include <iostream>
using namespace std;

int main() {
    int a, c;
    char b, d;
    cin >> a >> b;
    cin >> c >> d;
    cout << ((a>=19 && b == 'M') || (c>=19 && d == 'M'));
    return 0;
}