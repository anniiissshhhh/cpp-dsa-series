#include <iostream>
using namespace std;

void pattern1(int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
}

int main() {
    // pattern1 - square
    pattern1(10);

    return 0;
}