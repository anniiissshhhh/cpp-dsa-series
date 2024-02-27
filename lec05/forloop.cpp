#include <iostream>
using namespace std;

int sum_of_n(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

void fib_series(int n) {
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 1; i <= n - 2; i++) {
        int next_num = a + b;
        cout << next_num << " ";

        a = b;
        b = next_num;
    }
}

int main() {
    int n;
    cout << "n: ";
    cin >> n;

    cout << "sum from 1 to: " << n << ": " << sum_of_n(n) << endl;
    cout << "fib series from 1 to " << n << ": " << endl;
    fib_series(n);

    return 0;
}