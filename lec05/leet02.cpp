#include <iostream>
using namespace std;

int main() {
    // number of 1 bits
    // ip- 0000 0000 0000 1011
    // op- 3

    int n;
    cout << "n: ";
    cin >> n;

    int count = 0;

    while (n != 0) {
        // checking last but
        if (n & 1) {
            count++;
        }
        n = n >> 1;
    }

    cout << count;
    return 0;
}