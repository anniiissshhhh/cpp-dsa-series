#include <iostream>
using namespace std;

int power(int a, int b) {
    int ans = 1;

    for (int i = 1; i <= b; i++) {
        ans *= a;
    }

    return ans;
}

int main() {
    int a;
    cout << "a: ";
    cin >> a;

    int b;
    cout << "b: ";
    cin >> b;

    cout << a << "^" << b << " is: " << power(a, b);
    return 0;
}