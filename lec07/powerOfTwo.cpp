#include <limits.h>
#include <math.h>

#include <iostream>

using namespace std;

bool powerOfTwo(int n) {
    int ans = 1;
    for (int i = 0; i <= 30; i++) {
        if (n == ans) {
            return true;
        }

        if (ans < INT_MAX / 2) {
            ans *= 2;
        }
    }
    return false;
}

int main() {
    // power of two
    // ip- 16
    // op- true or 1
    cout << powerOfTwo(0) << endl;
    cout << powerOfTwo(16) << endl;
    cout << powerOfTwo(21) << endl;
    cout << powerOfTwo(20) << endl;

    return 0;
}