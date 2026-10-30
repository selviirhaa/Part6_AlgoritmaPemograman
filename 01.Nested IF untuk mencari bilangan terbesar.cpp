#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 2;
    int c = 6;

    if (a < b) {
        if (c < b) {
            cout << b << " is the greatest";
        }
        else {
            cout << c << " is the greatest";
        }
    }
    else {
        if (c < a) {
            cout << a << " is the greatest";
        }
        else {
            cout << c << " is the greatest";
        }
    }

    return 0;
}
