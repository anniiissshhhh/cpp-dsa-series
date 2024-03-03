#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int combinations(int n, int r) {
    // formula is n!/r! * (n-r)!
    return factorial(n) / factorial(r) * factorial(n - r);
}

int main() {
    int n;
    cout << "n: ";
    cin >> n;

    int r;
    cout << "r: ";
    cin >> r;

    cout << n << "C" << r << ": " << combinations(n, r) << endl;
    return 0;
}